// server.js
const express = require('express');
const http = require('http');
const { Server } = require('socket.io');

const app = express();
const server = http.createServer(app);
const io = new Server(server);

app.use(express.static('public'));

// --- Game data (edit as you like) ---
const gameData = [
  { category: "Science", questions: [
    { points: 100, question: "What planet is known as the Red Planet?", answer: "Mars" },
    { points: 200, question: "What is H2O commonly called?", answer: "Water" },
    { points: 300, question: "Atomic number of Oxygen?", answer: "8" }
  ]},
  { category: "History", questions: [
    { points: 100, question: "Who was the first President of the USA?", answer: "George Washington" },
    { points: 200, question: "In which year did WW2 end?", answer: "1945" },
    { points: 300, question: "Which wall fell in 1989?", answer: "Berlin Wall" }
  ]},
  { category: "Math", questions: [
    { points: 100, question: "What is 5+7?", answer: "12" },
    { points: 200, question: "Square root of 81?", answer: "9" },
    { points: 300, question: "What is 12 * 12?", answer: "144" }
  ]}
];

// --- Server-side state ---
const answered = {}; // key = `${c}_${q}` -> true
let currentQuestion = null; // {c, q, question, points, answer}
let currentPlayer = 1;
const scores = {1: 0, 2: 0};

function getPublicState() {
  return {
    gameData,
    answered,
    currentQuestion,
    currentPlayer,
    scores
  };
}

// --- Socket.IO events ---
io.on('connection', (socket) => {
  console.log('client connected', socket.id);

  // client requests initial state
  socket.on('getState', () => {
    socket.emit('state', getPublicState());
  });

  socket.on('selectQuestion', ({c, q}) => {
    const key = `${c}_${q}`;
    if (answered[key] || currentQuestion) {
      socket.emit('errorMsg', 'Question already taken or another is open.');
      return;
    }
    const qobj = (gameData[c] && gameData[c].questions[q]);
    if (!qobj) {
      socket.emit('errorMsg', 'Invalid question');
      return;
    }
    currentQuestion = { c, q, question: qobj.question, points: qobj.points, answer: qobj.answer };
    io.emit('questionOpened', currentQuestion);
    io.emit('state', getPublicState());
  });

  // controller indicates whether the current player was correct
  socket.on('answerResult', ({correct}) => {
    if (!currentQuestion) {
      socket.emit('errorMsg', 'No open question');
      return;
    }
    const key = `${currentQuestion.c}_${currentQuestion.q}`;
    const pts = Number(currentQuestion.points) || 0;
    if (correct) scores[currentPlayer] += pts;
    else scores[currentPlayer] -= pts;

    // mark as answered and clear current question
    answered[key] = true;
    currentQuestion = null;

    // by default switch player after a scored result
    currentPlayer = currentPlayer === 1 ? 2 : 1;

    io.emit('state', getPublicState());
    io.emit('closeQuestion');
  });

  socket.on('switchPlayer', () => {
    currentPlayer = currentPlayer === 1 ? 2 : 1;
    io.emit('state', getPublicState());
  });

  socket.on('resetGame', () => {
    // reset everything
    for (const k of Object.keys(answered)) delete answered[k];
    currentQuestion = null;
    scores[1] = 0; scores[2] = 0;
    currentPlayer = 1;
    io.emit('state', getPublicState());
    io.emit('closeQuestion');
  });

  socket.on('disconnect', () => {
    // nothing special for now
    console.log('client disconnected', socket.id);
  });
});

// serve index.html from /public
const PORT = process.env.PORT || 3000;
server.listen(PORT, () => console.log(`Server listening on ${PORT}`));


/*
 * Created by CMU | 4/11/25
 */

// Including standard i/o, standard library, standard boolean, unix standard library, string library

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <string.h>


// Main
int main() {

  int i;
  int j;
  long unsigned int z;
  int intA;
  intA = 0;
  float floatA = 5.99, floatB = 35e3;
  double doubleA = 3.1458923523;
  char charA, charB;
  charA = charB = 'A';
  const int l = 4; // can't be changed.
  const int w = 6; // can't be changed.
  bool isProgrammingFun = true;
  bool isEatingHealthyFun = false;
  char textSt [] = "Hello World!";
  char textCopy [] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'}; // Make note of the \0 at the end.
  char txt [] = "We are the so-called \"Vikings\" from the north. Here are a couple of other needed symbols \' and \\"; // Some others, \n - New line, \n - Tab, \0 - Null
  int myNumbers[] = {25, 50, 75, 100}; // Must all be same type
  int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} }; // 1st dimension (2) # of rows, 2nd dimension (3) # of columns                                      
  
  // Format Specifiers
  printf("I'm declaring the following variables:\n\n1. intA = %d,\n2. floatA = %f,\n3. floatB = %f (35e3 or 35*10^3),\n4. doubleA = %.7lf (Pi to 10 digits, but only 7 decimal precision),\n5. charA = %c,\n6. charB = %c,\n7. textSt = %s,\n", intA, floatA, floatB, doubleA, charA, charB, textSt);
  
  if (isProgrammingFun == true && isEatingHealthyFun == false) {
    printf("8. isProgramming Fun = True, or %d\n9. isEatingHealthyFun = False, or %d\n\n", isProgrammingFun, isEatingHealthyFun);
  } else if (isProgrammingFun == false && isEatingHealthyFun == true) {
    printf("8. isProgramming Fun = False, or %d\n9. isEatingHealthyFun = True, or %d\n\n", isProgrammingFun, isEatingHealthyFun);
  } else if (isProgrammingFun && isEatingHealthyFun == false) {
    printf("8. isProgramming Fun = False, or %d\n9. isEatingHealthyFun = False, or %d\n\n", isProgrammingFun, isEatingHealthyFun);
  } else {
     printf("8. isProgramming Fun = True, or %d\n9. isEatingHealthyFun = True, or %d\n\n", isProgrammingFun, isEatingHealthyFun);
  }

  int numLength = sizeof(myNumbers) / sizeof(myNumbers[0]);
  printf("I've also declared an array with a memory size of %lu bytes; It contains the following numbers:\n\n", sizeof(myNumbers));
  for (z=0;z<numLength;z++) {
    printf("%d\n", myNumbers[z]);
  }
  printf("\n");

  printf("I've also got a matrix, or multi-dimensional array. (Like a spreadsheet)\n\n");
  printf("Let's show you the element in the first row, and third column: %d\n\n", matrix[0][2]);

  printf("Let's loop through it now:\n");
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 3; j++) {
      printf("%d\n", matrix[i][j]);
    }
  }
  printf("\n"); // extra break

  matrix[0][2] = 5;
  printf("Now, we'll change that value. Here is the new value: %d\n\n", matrix[0][2]);


  printf("Let's find the area of our square:\nLength: %d (Constant)\nWidth: %d (Constant)\nArea (length*width): %d\n\n", l, w, l*w);
 
  printf("Let's work with Strings now.\n");
  printf("Let's grab the 3rd character in the string (Strings are arrays of characters): %c\n", textSt[2]);  
  // You can also edit strings just like arrays.



  int day=4;

  switch (day) {
    case 1:
      printf("Today is Monday\n\n");
      break;
    case 2:
      printf("Today is Tuesday\n\n");
      break;
    case 3:
      printf("Today is Wednesday\n\n");
      break;
    case 4:
      printf("Today is Thursday\n\n");
      break; 
    case 5:
      printf("Today is Friday\n\n");
      break;
    case 6:
      printf("Today is Saturday\n\n");
      break;
    case 7:
      printf("Today is Sunday\n\n");
      break;
    default: // return if no match
      printf("That is not a day of the week!\n");
    }

  i = 0;
  while (i<5) {
    printf("%d\n", i);
    i++;
  } 
  printf("While loop complete!\n\n");

  i = 0;
  do {
    printf("%d\n", i);
    i++;
  }
  while (i<5); 
  printf("Do While loop complete!\n\n");

  i=0;
  int i2=0;

  printf("Let's show a nested for loop that will use 'break' to stop:\n\n");

  for (i=0;i<5;++i) {
    printf("%d\n",i);

    for (i2=0;i2<=3;i2 += 2) {
      printf("Inner: %d\n", i2);
      if (i==4&&i2==2) {
        printf("BREAK!\n\n");
        break;
      } 

    }
 
  }

  printf("Let's show a nested for loop that will skip sometimes due to 'continue':\n\n");

  for (i=0;i<3;++i) {
    printf("%d\n",i);

    for (i2=0;i2<=2;i2 += 2) {
      printf("Inner: %d\n", i2);
      if (i2==1) {
        continue;
      } 

    }
 
  } 

  printf("For loop complete!\n\n");

  return 0;
}

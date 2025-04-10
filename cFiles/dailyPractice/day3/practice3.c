/*
 * Created by Collin Mullis, on 4/3/25.
 */

// including standard i/o, standard boolean, unix standard library

#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>


// Main function
int main() {

  int intA;
  intA = 15;
  float floatA = 5.99;
  double doubleA = 3.14578923523;
  char charA = 'A';
  int l = 4; 
  int w = 6;
  int area;
 
  // Format Specifiers
  printf("I'm declaring the following variables:\n1. intA = %d,\n2. floatA = %5f,\n3. charA = %c,\n",intA, floatA, charA); // %.xf can be used to clarify how many decimal points should be shown. 

  int intB = 5;
  // Operands in Format Specifiers
  // d/i int f/F float lf double c char s strings (text)
  printf("Operating on varaibles can be done in the in format specifiers. I've created another variable, intb, with a value of %d.\nHere is the sum of intA & intB: %d\n.", intB, intA+intB); 

  // Change a variables value, after it's already been assigned. 
  intB = 7; 
  int intC = 11, intD = 12, intE = 13;
  char charB, charC, charD;
  charB = charC = charD = 'B';

  // Strings (don't quite understand yet, but prolly an array)
  char Text[] = "Hello";

  // Scientific Number
  float floatB = 35e3;
  double doubleB = 12E4;

  // SizeOf Operator | Use %lu because compiler expects sizeof to return 'long unsigned int'
  int intF;
  float floatF;
  double doubleF;
  char charF;

  printf("%lu\n", sizeof(intF));
  printf("%lu\n", sizeof(floatF));
  printf("%lu\n", sizeof(doubleF));
  printf("%lu\n", sizeof(charF));

  // Type Conversion

  int intG=5;
  int intH=2;
  int intI=5/2;

  printf("%d\n", intI); // Outputs 2

  // Implicit | NOTE: These will cause an error in gcc compiler, so we'll comment them out. 
//  float floatJ=9; // int to float 
//  int   intJ=9.99;// float to int

  // Explicit: Manual conversion
  float floatK= (float) 5 / 2;

  printf("%f\n", floatK);

  // Constants : can't be changed
  const int intK = 15;
  const int mphstatic = 60;

  // Booleans

  bool isProgrammingFun = true;
  bool isFishTasty = false;

  // bools return an int, use %d

  printf("%d\n", isProgrammingFun);
  printf("%d\n", 10>9);

  bool isHamburgerTasty = true;
  bool isPizzaTasty = true;
  printf("%d\n", isHamburgerTasty = isPizzaTasty);

  // Condition & If Statements

  if (20 > 18) {
    printf("20 is greater than 18\n");
  } else if (20 < 18) {
    printf("20 is not greater than 18\n");
  } else {
    printf("Who knows man?!");
  }
  // Short-hand 
  int intL = 20;
  (intL<18)?printf("Good day!\n"):printf("Good evening.\n");

  // Switch

  int switchDay=4;

  switch (switchDay) {
    case 1:
      printf("Monday");
      printf("\n");
      break;
    case 2:
      printf("Tuesday");
      printf("\n");
      break;
    case 3:
      printf("Wednesday");
      printf("\n");
      break;
    case 4:
      printf("Thursday");
      printf("\n");
      break;
    case 5:
      printf("Friday");
      printf("\n");
      break;
    case 6:
      printf("Saturday");
      printf("\n");
      break;
    case 7:
      printf("Sunday");
      printf("\n");
      break;
    default: // will return if there is no case match
      printf("That's not a day of the week!");
      printf("\n");
  }
  
  // While loops

  int intM = 0;
  while (intM < 5) {
    printf("%d\n", intM);
    sleep(1);
    //usleep() microseconds
    //nanosleep() nanoseconds
    intM++;
  }

  // do while
  int intN = 0;
  do {
    printf("%d\n", intN);
    usleep(500000);
    intN++;
  }
  while (intN < 5);

  // while
  int intO = 5;
  while (intO > 5) {
    print("%d\n", intO);
    int0--;
  }

  printf("Count down over!");



  return 0;
}

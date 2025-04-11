/*
 * Created by CMU | 4/11/25
 */

// Including standard i/o, standard library, standard boolean, unix standard library

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>


// Main
int main() {

  int i;
  long unsigned int z;
  int intA;
  intA = 0;
  float floatA = 5.99, floatB = 35e3;
  double doubleA = 3.1458923523;
  char charA, charB;
  charA = charB = 'A';
  char Text [] = "Hello";
  const int l = 4; // can't be changed.
  const int w = 6; // can't be changed.
  bool isProgrammingFun = true;
  bool isEatingHealthyFun = false;
  int myNumbers[] = {25, 50, 75, 100}; // Must all be same type
  

  // Format Specifiers
  printf("I'm declaring the following variables:\n1. intA = %d,\n2. floatA = %f,\n3. floatB = %f (35e3 or 35*10^3),\n4. doubleA = %.7lf (Pi to 10 digits, but only 7 decimal precision),\n5. charA = %c,\n6. charB = %c,\n7. Text = %s,\n", intA, floatA, floatB, doubleA, charA, charB, Text);
  
  if (isProgrammingFun == true && isEatingHealthyFun == false) {
    printf("8. isProgramming Fun = True, or %d\n9. isEatingHealthyFun = False, or %d\n", isProgrammingFun, isEatingHealthyFun);
  } else if (isProgrammingFun == false && isEatingHealthyFun == true) {
    printf("8. isProgramming Fun = False, or %d\n9. isEatingHealthyFun = True, or %d\n", isProgrammingFun, isEatingHealthyFun);
  } else if (isProgrammingFun && isEatingHealthyFun == false) {
    printf("8. isProgramming Fun = False, or %d\n9. isEatingHealthyFun = False, or %d\n", isProgrammingFun, isEatingHealthyFun);
  } else {
     printf("8. isProgramming Fun = True, or %d\n9. isEatingHealthyFun = True, or %d\n", isProgrammingFun, isEatingHealthyFun);
  }

  int numLength = sizeof(myNumbers) / sizeof(myNumbers[0]);
  printf("I've also declared an array, with the following numbers:\n\n");
  for (z=0;z<numLength;z++) {
    printf("%d\n", myNumbers[z]);
  }

  printf("The size of the array is %lu bytes\n\n", sizeof(myNumbers)); // 20

 
  printf("Let's find the area of our square:\nLength: %d (Constant)\nWidth: %d (Constant)\nArea (length*width): %d\n\n", l, w, l*w);
  
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

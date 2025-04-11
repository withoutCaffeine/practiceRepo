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
  
  printf("Let's find the area of our square:\nLength: %d (Constant)\nWidth: %d (Constant)\nArea (length*width): %d\n", l, w, l*w);
  
  int day=4;

  switch (day) {
    case 1:
      printf("Monday\n");
      break;
    case 2:
      printf("Tuesday\n");
      break;
    case 3:
      printf("Wednesday\n");
      break;
    case 4:
      printf("Thursday\n");
      break; 
    case 5:
      printf("Friday\n");
      break;
    case 6:
      printf("Saturday\n");
      break;
    case 7:
      printf("Sunday\n");
      break;
    default: // reutrn if no match
      printf("That is not a day of the week!\n");
    }

  int i = 0;
  while (i<5) {
    printf("%d\n", i);
    i++;
  } 
  printf("While loop complete!\n");

  i = 0;
  do {
    printf("%d\n", i);
    i++;
  }
  while (i<5); 
  printf("Do While loop complete!\n");

  i=0;
  for (i=0;i<5;i++) {
    printf("%d\n",i);
  } 
  printf("For loop complete!\n");
  
  return 0;
}

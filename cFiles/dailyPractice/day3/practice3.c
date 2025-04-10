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

  // Implicit
  float floatJ=9; // int to float
  int   intJ=9.99;// float to int


  return 0;
}

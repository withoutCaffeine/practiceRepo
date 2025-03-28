#include <stdio.h>
#include <stdbool.h>

int main() {
  int num1=10;
  float float1=3.141592;
  double double1=10.7829304567;
  char char1='c';
  const int unChange=121; // Cannot be changed. 
  bool isGoodProgram=false; 

// Format Specifiers & Output
  printf("Hello World!\n");
  printf("Here is an int: %d ", num1);
  printf("Memory size: %lu\n", sizeof(num1));
  printf("Here is a float: %f ", float1);
  printf("Memory size: %lu\n", sizeof(float1));
  printf("Here is a double: %lf ", double1);
  printf("Memory size: %lu\n", sizeof(double1));
  printf("Here is a character: %c ", char1);
  printf("Memory size: %lu\n", sizeof(char1));

// Operators
  printf("num1 is %d, and unChange is %d, if we add them together, we get %d\n", num1, unChange, num1+unChange);
  printf("Here is a boolean, called 'isGoodProgram'. This is set to 'false', and will return %d\n", isGoodProgram);

// Comparison
  printf("%d", 10 > 9);

  return 0;
}

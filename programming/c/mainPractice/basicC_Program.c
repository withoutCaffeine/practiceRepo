/*
 * This program was created by Collin Mullis, on 3/17/25. 
 * Last edit: 3/20/25 3:21 PM EST
 */

// including standard input/output library
#include <stdio.h>

// including standard boolean library
#include <stdbool.h>

// including unix standard library
#include <unistd.h>

// 	Main Function Begins here
// ---------------------------------------------------------------------------------------------------------------------------------------

int main() {

	// Beginner information
	
	printf("Hello World, this is my second try!\n"); // you can add '\n' to add a new line!

	printf("I've added this after, and this just adds another print statement to the 'main' function\n");

	// When working with text, it must use the "" double quotation marking, no single space, and do not forget them. 
	// Adding multiple printf statements does not add a new line at the end of the output. 

	printf("Hello World!\nI am learning C.\nAnd it is awesome!\n");

	//You don't have to just add at end, can be in middle.

	printf("This next part will print a bank line\n\n");

	// 2 \n back-to-back will create a blank line.
	
	printf("You can also create a horizontal tab\t, a backslash \\, or a double quote \".\n");

	// \t tab, \\ backslash, \" double quote:

// ---------------------------------------------------------------------------------------------------------------------------------------

	/* 
	 * C Variables Types
	 *
	 * int		|stores integer
	 * float	|stores floating point numbres, with decimals
	 * char		|stores single characters, such as 'a' or 'B'. Characters are surrounded by single quotes
	 *
	 */

	int myNum = 15;
	int urNum; // Declare a variable
	urNum = 20; // Assign a value to the variable
	float myFloatNum = 5.99;
	char myLetter = 'D';

	/* 
	 * In C you cannot use a print function in C to display the value of a variable in C.
	 * to output variables in C, you must use Format Specifiers. 
	 *
	 * A format specifier starts with a percentage sign %, followed by a character.
	 *
	 * Ex: to output the value of an int variable, use %d surrounded by double quotes (""), inside the printf() function: 
	 */

	printf("Here is myNum: %d\n", myNum); // Should output 15
	printf("Here is myFloatNum: %f\n", myFloatNum); // 5.99
	printf("Here is myLetter: %c\n", myLetter);
	
	// You can print multiple types in a single printf() function by using multiple.
	printf("My number is %d and my letter is %c\n", myNum, myLetter); 

	// You can print a value w/o storing it in a variable, as longas you use the correct format specifier
	printf("Your favorite number is: %d\n", 20);
	printf("Your favorite letter is: %c\n", 'F');
		
	printf("You can also print the sum of values: %f\n", myNum + myFloatNum);

	// Changing Variable Values
	int changeMe = 15;
	changeMe = 10;

	int toBeChangedTo = 23;
	changeMe = toBeChangedTo;

	printf("The variable 'changeMe' was 15, then 10, then was set to the value of 'toBeChangedTo' and is now: %d.\n", changeMe);

	// Assign multiple variables at the same time
	int x = 5, y = 6, z = 50;
	printf("%d\n", x + y + z);

	int a, b, c;
	a = b = c = 50;
	printf("%d\n", a + b + c);

	// All C variables must be identified with unique names, use descriptive names :D
	int minutesPerHour = 60;

	int m = 60; // Bad example
	
// ---------------------------------------------------------------------------------------------------------------------------------------

	// --------- Real Life Examples ----------
	
	//Student Data

	int studentID = 15;
	int studentAge = 23;
	float studentFee = 75.25;
	char studentGrade = 'B';

	// Print variables
	printf("Student id: %d\n", studentID);
	printf("Student age: %d\n", studentAge);
	printf("Student fee: %f\n", studentFee);
	printf("Student grade: %c\n", studentGrade);

	// Calculate the Area of a Rectangle
	int length = 4;
	int width = 6;
	int area;

	// Calculation
	area = length * width;

	// Print the variables
	printf("Length is: %d\n", length);
	printf("Width is: %d\n", width);
	printf("Area of the rectangle is: %d\n", area);

// ---------------------------------------------------------------------------------------------------------------------------------------

	// C Data Types

	/*
	 * Basic Data Type
	 *
	 * Type		|Size		|Description
	 *
	 * int		|2 or 4 bytes	|Stores whole numbers, without decimals
	 * float	|4 bytes	|Stores fractional numbers, containing one or more decimals, 6-7 decimal digits.
	 * double	|8 bytes	|Stores fractional numbers, containing one or more decimals. 15 decimal digits.
	 * char		|1 byte		|Stores a single character/letter/number, or ASCII values
	 * 
	 * Basic Format Specifiers
	 * Format Specifier	|Data Type	
	 * %d or %i		|int
	 * %f or %F		|float
	 * %lf			|double
	 * %c			|char
	 * %s			|used for 'strings (text)', which you will learn more about in a later chapter
	 */

	char myGrade = 'A'; // If you try to store more than 1 character, it will only print the last character, and will probably cause errors. 
	printf("%c\n", myGrade);
	char charA = 65, charB = 66, charC = 67;
	printf("%c\n", charA);
	printf("%c\n", charB);
	printf("%c\n", charC);

	// Strings!
	char myText[] = "Hello";
	printf("%s\n", myText);

	// Scientific Numbers
	float f1 = 35e3;
	double d1 = 12E4;
	printf("%f\n", f1);
	printf("%lf\n", d1);

	// You can use %.xf, where 'x' is how many decimal points the output should show. 
	float myFloatNum1 = 3.5;
	printf("%f\n", myFloatNum1);
	printf("%.1f\n", myFloatNum1);
	printf("%.2f\n", myFloatNum1);
	printf("%.4f\n", myFloatNum1);

	// SizeOf Operator
	int sizeInt;
	float sizeFloat;
	double sizeDouble;
	char sizeChar;

	printf("%lu\n", sizeof(sizeInt)); // We use %lu format because the compiler expects the sizeof operator to return a 'long unsigned int' 
	printf("%lu\n", sizeof(sizeFloat));
	printf("%lu\n", sizeof(sizeDouble));
	printf("%lu\n", sizeof(sizeChar));

	/*
	 * Why should you know the size of your data types?
	 * Says something about memory usage and performance.
	 * For example, the size of a char type is 1 byte. Which means if you ahve an array of 1000 char values, it will occupy 1000 bytes (1kb) of memory. 
	 *
	 * Using the right data type for the right purpose will save memory and improve the performance of your program.
	 */

	// ---------- Real Life Examples ----------
	
	int items = 50;
	float cost_per_item = 9.99;
	float total_cost = items * cost_per_item;
	char currency = '$';

	printf("Number of item: %d\n", items);
	printf("Cost per item: %.2f %c\n", cost_per_item, currency);
	printf("Total cost = %.2f %c\n", total_cost, currency);

// ---------------------------------------------------------------------------------------------------------------------------------------

  // Type Conversion
	int typeConvX=5;
	int typeConvY=2;
	int typeConvSum=5/2;

	printf("%d\n", typeConvSum); // Outputs 2
	
	/*
	 * There are two type conversions
	 * 	Implicit Conversion (Automatically)
	 * 	Explicit Conversion (Manually)
	 */

	// Implicit: Automatic conversion | Can be risky, you might lose control over specific values in certain situations.
	
	float convFloat=9;  // Auto conv: int to float
	// int   convInt=9.99; // Auto conv: float to int, this line was commented out because it shows an error on MacOS
	printf("%f\n", convFloat); // 9.000000
	
	// Explicit: Manual conversion 
	
	float convSum1 = (float) 5 / 2; // Manual conv: int to float
	
	printf("%f\n", convSum1); // 2.500000

	int convNum1 = 5;
	int convNum2 = 2;
	float convSum2 = (float) convNum1 / convNum2; // You can also place the type in front of a variable (Not super sure what this means, but w.e)

	printf("%f\n", convSum2); // 2.500000
	printf("%.1f\n", convSum2); // You can even remove the extra zeros with decimal precision. 

// ---------------------------------------------------------------------------------------------------------------------------------------

	// --------- Real Life Examples ----------
	
	// Set maximum possible score in the game to 500
	int maxScore = 500;

	// The actual score of the user
	int userScore = 423;

	/* 
	 * Calculate the percentag eof the user's score in relation to the maximum available score.
	 * Convert userScore to float to make sure that the division is accurate 
	 */

	float percentage = (float) userScore / maxScore * 100.0;

	printf("User's percentage is %.2f\n", percentage);

// ---------------------------------------------------------------------------------------------------------------------------------------

 // C Constants
 
	/* 
	 * If you don't want others (or yourself) to change existing variable values, you can use the 'const' keyword. 
	 * This will declare var as 'constant', which mean sunchangeable and read-only:
	 *
	 * Good practice is to declare constants with uppercase.
	 */

	const int MYNUMSTATIC = 15; // myNumStatic will always be 15 myNumStatic = 10; // error: assignment of read-only variable 'myNum' 
	const int minutesPerHourStatic = 60; // constants must be assinged with a value. 
	
// ---------------------------------------------------------------------------------------------------------------------------------------

  // C Operators

	/*
	 * Used to perform operations on variables and values
	 * 
	 * Arithmetic Operators
	 * Operator	|Name		|Description
	 * +		|Addition	|Adds togther two values
	 * -		|Subtraction	|Subtracts one value from another
	 * *		|Multiplication	|Multiplies two values
	 * /		|Division	|Divides one values by another
	 * %		|Modulus	|Returns the division remainder
	 * ++		|Increment	|Increases the value of a variable by 1 Ex: ++x
	 * --		|Decrement	|Decreases the value of a variable by 1 Ex: --x
	 * 
	 * Assignment Operators
	 * Operator	|Example	|Same As
	 * =		|x = 5		|x = 5
	 * +=		|x += 3		|x = x + 3
	 * -=		|x -= 3		|x = x - 3
	 * *=		|x *= 3		|x = x * 3
	 * /=		|x /= 3		|x = x / 3
	 * %= 		|x %= 3		|x = x % 3
	 * &=		|x &= 3		|x = x & 3
	 * |=		|x |= 3		|x = x | 3
	 * ^=		|x ^= 3		|x = x ^ 3
	 * >>=		|x >>=3		|x = x >>3
	 * <<=		|x <<=3		|x = x <<3
	 *
	 * Comparison Operators
	 * Operator	|Name				|Example	|Description
	 * ==		|Equal To			|x == y		|Returns 1 if the values are equal
	 * !=		|Not Equal			|x != y		|Returns 1 if the values are not equal
	 * >		|Greater Than 			|x >  y		|Returns 1 if the value is greater than the second value
	 * <		|Less than 			|x <  y		|Returns 1 if the first value is less than the second value
	 * >=		|Greater than or equal to	|x >= y		|Returns 1 if the first value is greater than, or equal to, the second value
	 * <=		|Less than or equal to		|x <= y		|Returns 1 if teh first value is less than, or equal to, the second value
	 *
	 * Logical Operators
	 * Operator	|Name	|Example	|Description
	 * &&		|AND	|x < 5 && x < 10|Returns 1 if both statemetns are true
	 * ||		|OR	|x < 5 || x < 4	|Returns 1 if one of teh statements is true
	 * !		|NOT	|!(x<5 && x<10) |Reverse the result, returns 0 if the result is 1
	 */

	int operatorMyNum = 100 + 50;
	printf("%d\n", operatorMyNum);
	
// ---------------------------------------------------------------------------------------------------------------------------------------

 // C Booleans
 
	/*
	 * Data type that can only have one of two values
	 * 	Yes / No
	 * 	On / Off
	 * 	True / False
	 *
	 * 'bool' data type.
	 */

	bool isProgrammingFun = true; // will return 1
	bool isFishTasty = false; // will return 2 

	// Since boolean reutrns an int, use %d format specifier to print a boolean value
	printf("%d\n", isProgrammingFun);
	printf("%d\n", isFishTasty);
	printf("%d\n", 10 > 9);
	int boolX = 10;
	int boolY = 9;
	printf("%d\n", boolX>boolY);

	printf("This will return true (1), because 10 equals 10: %d\n", 10 == 10);
	printf("This will return false (0), because 10 does not equal 15: %d\n", 10 == 15);
	printf("This will return false (0), because 5 does not equal 55: %d\n", 5 == 5);

	bool isHamburgerTasty = true;
	bool isPizzaTasty = true;

	// Find out if both hamburger and pizza is tasty
	printf("%d\n", isHamburgerTasty == isPizzaTasty);

// ---------------------------------------------------------------------------------------------------------------------------------------

  // Condition and If Statements
  
	/*
	 * Syntax
	 *
	 * if (condition1) {
	 * 	block of code to be executed if the condition is true
	 *} else if (condition2) {
	 *	block of code to be executed if the condition1 is false and condition2 is true 
	 * } else {
	 *	block of code to be executed if the condition1 is false and condition2 if false
	 * }
	 */
	
	if (20 > 18) {
		printf("20 is greater than 18\n");
	}

	// Can also test variables
	
	int conditX = 20;
	int conditY = 18;
	if (conditX > conditY) {
		printf("x is greater than y\n");
	}

// ----------------------------------------

	int conditTime = 20;
	if (conditTime < 18) {
		printf("Good day!\n");
	} else {
		printf("Good evening!\n");
	}
	// Outputs "Good evening!"

// ----------------------------------------

	int conditTime2 = 22;
	if (conditTime2 < 10) {
	  printf("Good morning!\n");
	} else if (conditTime2 < 20) {
	  printf("Good day!\n");
	} else {
	  printf("Good evening!\n");
	}
	// Outputs "Good evening!"

// ----------------------------------------

  // Short Hand If Else

	// Syntax
	// variable = (condition) ? expressionTrue : expressionFalse;

	int conditTime3 = 20;
	(conditTime3<18)?printf("Good day!\n"):printf("Good evening.\n");

// ----------------------------------------
  
  // C Switch

  // Syntax
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
 
// ----------------------------------------

  // C While Loop
  
  // Syntax
  int whileI = 0;
  while (whileI <5) {
    printf("%d\n", whileI);
    whileI++;
  }

// ----------------------------------------

  // C Do/While Loop

  // Syntax
  int doI = 0;

  do {
    printf("%d\n", doI);
    doI++;
  }
  while (doI < 5);

// ----------------------------------------

  // Real Life Examples
  
  int whileCountDown = 3;

  while (whileCountDown > 0) {
    printf("%d\n", whileCountDown);
    whileCountDown--;
    sleep(1);
  }

  printf("Happy New Year!!\n");


// ----------------------------------------

  // For Loops

  // Syntax
  int forInt;

  for (forInt = 0; forInt < 5; forInt++) {
    printf("%d\n", forInt);
  }

  int nestI, nestJ;

  for (nestI=1;nestI<=2;++nestI) {
    printf("Outer: %d\n", nestI);

    for (nestJ=1;nestJ<=3;++nestJ) {
      printf(" Inner: %d\n", nestJ);
    }
  }

  // Real-Life Examples
  
  int realI;

  for (realI=0;realI<=100;realI+=10) {
    printf("%d\n", realI);
  }

  // Break & Continue

  int breakI;

  for (breakI=0;breakI<10;breakI++) {
    if (breakI==4) {
      break;
    }
    printf("%d\n", breakI);
  }
  return 0;
}


// REMEMBER, you need to run gcc <filename> -o <executable name> to compile this program. 
// If you forget to put -o, the default output program will be called 'a.out'

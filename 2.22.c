// Exercise 2.24 Solution
#include <stdio.h>
int main()
{
   int integer; // integer input by user

   printf( "%s", "Input an integer: " ); // prompt
   scanf( "%d", &integer ); // read integer

// test if integer is even
   if ( integer % 2 == 0 ) {
   printf( "%d is an even integer\n", integer );
   } // end if

// test if integer is odd
   if ( integer % 2 != 0 ) {
   printf( "%d is an odd integer\n", integer );
 } // end if
 return 0;
} // end main

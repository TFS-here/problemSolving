//Excercise 2.23
#include <stdio.h>

int main()
{
   int integer1,integer2; //input two integer

   printf( "%s", "Input two integers: " ); // prompt user
   scanf( "%d%d", &integer1, &integer2 ); // read two integers

// use remainder operator
   if ( integer1 % integer2 == 0 ) {
   printf( "%d is a multiple of %d\n", integer1, integer2 );
   } // end if

   if ( integer1 % integer2 != 0 ) {
   printf( "%d is not a multiple of %d\n", integer1, integer2 );
 } // end if
 return 0;
} // end main

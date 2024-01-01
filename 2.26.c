// Exercise 2.26
#include <stdio.h>

int main()
{
  int number; // number input by user
  int temp; // temporary integer

  printf("Enter a five-digit number: " ); // prompt user
  scanf( "%d", &number ); // read integer
  printf( "%d ", number / 10000 ); // print leftmost digit
  temp = number % 10000;

  printf( " %d ", temp / 1000 );
  temp = temp % 1000;

  printf( " %d ", temp / 100 );
  temp = temp % 100;

  printf( " %d ", temp / 10 );
  temp = temp % 10;

  printf( " %d\n", temp ); // print right-most digit
  return 0;
} // end main

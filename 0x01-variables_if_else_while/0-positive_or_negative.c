#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main description : a function that takes arandom
 * int stored in a variable called n and test if the
 * is positive, negative or simply zero
 * if statement : tests if n is lower than 0
 * if its true the program outputs n is negative 
 * otherwise if n = 0 the program outputs n is zero
 * otherwise the program outputs n is positive
 * return (0) = success
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

      if (n < 0)
      {
            printf("%d is negative" , n);
      }
      else if ( n == 0 )
      {
            printf("%d is zero" , n);
      }
      else 
      {
            printf("%d is positive" , n);
      }
      
      

	return (0);
}

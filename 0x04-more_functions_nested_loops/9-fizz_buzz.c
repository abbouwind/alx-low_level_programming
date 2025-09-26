#include <stdio.h>

/**
 *main - entry point
 *print numbers from 1 to 100
 *if number is multiple of 3 replace wih Fizz
 *if number is multiple of 5 replace wih Buzz
 *if number is multiple of 3 and 5
 *replace wih FizzBuzz
 *Return: Always 0.
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}

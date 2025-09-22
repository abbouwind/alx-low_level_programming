#include "main.h"

/**
 * print_most_numbers - Write a function that prints the numbers,
 * from 0 to 9, followed by a new line skipping 2 and 4
 */

void print_most_numbers(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		if (a != 2 & a != 4)
		{
			_putchar(a);
		}
	}
}	

#include "main.h"

/**
 * print_alphabet_x10 - a fucntion that prints the alphabet
 * from a to z followed by a new line  10 times using a nested
 * loop and the _putchar function
 */

void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar ('\n');
	}
}

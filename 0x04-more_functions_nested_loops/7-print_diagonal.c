#include "main.h"

/**
 *print_diagonal- a function that draws
 *a diagonal on the terminal
 *@n: the lenght of the diagonal
 **/

void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 1; i <= n; i++)
	{
		for (j = 2; j <= i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}

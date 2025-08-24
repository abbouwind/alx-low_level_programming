#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @j: the number of wich we want the last digit
 *
 * Return: the last digit
 */

int print_last_digit(int j)
{
	int l;

	if (j >= 0)
	{
		l = j % 10;
	}
	else if (j < 0)
	{
		l = -(j % 10);
	}
	_putchar(l + '0');
	return (l);
}

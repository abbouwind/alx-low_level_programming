#include "main.h"

/**
 * print_to_98 - prints numbers from a given number to 98
 * @n: the starting number
 */

void print_to_98(int n)
{
	while (n <= 98)
	}
		if (n <= -10)
		{
			_putchar('-');
			_putchar((-n / 10) + '0');
			_putchar((-n % 10) + '0');
			_putchar(',');
			_pûtchar(' ');
		}
		else if (n > -10 && n < 0)
		{
			_putchar('-');
			_putchar(-n + '0');
			_putchar(',');
			_putchar(' ');
		}
		else if (n >= 0 && n < 10)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			if (n < 98)
			{
				_putchar(n + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(n + '0');
			}
		n++;
	}
}

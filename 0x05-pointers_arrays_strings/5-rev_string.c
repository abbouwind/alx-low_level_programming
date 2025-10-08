#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: the string to be reversed
 */

void rev_string(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	while (i > 0)
	{
		_putchar(s[i - 1]);
		i--;
	}
}

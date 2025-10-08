#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: the string to be reversed
 */

void rev_string(char *s)
{
	int i, j, len;
	char *rev;
	j = 0;
	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	char rev[len +1];
	i = len;
	
	rev[len] = '\0';

	for (j = 0; j <= i-1; j++)
	{
		rev[j] = s[i-1];
		_putchar(rev[j]);
		i--;
	}
}

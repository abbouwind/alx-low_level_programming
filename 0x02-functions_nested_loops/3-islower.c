#include "main.h"

/**
 * _islower - a function that checks if a character is lowercase or not
 * @f: the character to check
 * return: 1 if lower case and 0 otherwise
 */

int _islower(int f)
{
	if (f >= 'a' && f <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include "main.h"

/**
 * _islower - a function that tests if the data stored in the parameter
 * f is lowercase or not
 * and returns 1 if lower case and 0 otherwise
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

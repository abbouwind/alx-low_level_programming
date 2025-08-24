#include "main.h"

/**
 * _islower - checks if a character is lowercase or not
 * @f the character to check
 *
 * Return: 1 if lowercase, 0 otherwise 
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

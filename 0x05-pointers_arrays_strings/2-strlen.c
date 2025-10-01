#include "main.h"

/**
 * _strlen - a function that
 * returns the lenght of a string
 * @s: the string
 * Return: the lenght of string
 */

int _strlen(char *s)
{
	int i, lenght;

	i = lenght = 0;
	while (s[i] != '\0')
	{
		lenght += 1;
		i += 1;
	}
	return (lenght);
}

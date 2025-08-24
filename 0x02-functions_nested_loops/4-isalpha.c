#include "main.h"

/**
 *  _isalpha - checks if a character is alphabetic or not
 *@a: the character to check
 *Return: 1 if alphabetic, 0 otherwise
 */

int _isalpha(int a)
{
	return ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'));
}

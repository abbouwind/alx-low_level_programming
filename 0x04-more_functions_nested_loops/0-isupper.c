#include "main.h"

/**
*_isupper: a function that checks 
if a character is upper or lower case
@c: the character to check
return 1 if c is uppercase
*return 0 otherwise
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return(1);
	}
	return (0);
}

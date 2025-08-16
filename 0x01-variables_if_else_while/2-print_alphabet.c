#include <stdio.h>

/**
*main - Entry point
*Return: Always 0 (Success)
*/

int main(void)
{
	int low = 97;

	while (low <= 122)
	{
		putchar(low);
		low += 1;
	}

	putchar('\n');

	return (0);
}

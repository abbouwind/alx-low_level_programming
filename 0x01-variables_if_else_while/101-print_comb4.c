#include <stdio.h>

/**
*main - Entry point
*Return: Always 0 (Success)
*/

int main(void)
{
	int a, b, c;

	for (a = 48; a <= 55; a++)
	{
		for (b = a + 1; b <= 56; b++)
		{
			for (c = b + 1; c <= 57; c++)
			{
				if (c > 50)
				{
					putchar(',');
					putchar(' ');
				}
				putchar(a);
				putchar(b);
				putchar(c);
			}
		}
	}
	putchar('\n');
	return (0);
}

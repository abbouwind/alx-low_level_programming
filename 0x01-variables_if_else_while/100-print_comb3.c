#include <stdio.h>

/**
*main - Entry point
*Return: Always 0 (Success)
*/

int main(void)
{
	for (int a = 48; a <= 56; a++)
	{
		for (int b = a+1; b <= 57; b++)
		{
			if (b>'1')
			{
				putchar(',');
				putchar(' ');
			}
			putchar(a);
			putchar(b);
		}
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
*main - Entry point
*Return: Always 0 (Success)
*/

int main(void)
{
	int a, b;
	int i, j;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 56; b++)
		{
			for (i = 48; i <= 57; i++)
			{
				for (j = 48; j <= 57; j++)
				{
					if ((a < i) || (a == i && b < j)
					{
						putchar(a);
						putchar(b);
						putchar(' ');
						putchar(i);
						putchar(j);
						if (!(a == 57 && b == 56 && j == 57))
						{
							putchar(',');
							putchar(' ');
						}
					}
				}

			}
		}

	}
	putchar('\n');
	return (0);
}

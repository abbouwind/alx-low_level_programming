#include <stdio.h>

/**
*main - Entry point
*Return: Always 0 (Success)
*/

int main(void)
{
      int up = 65;
      int low = 97;
      while (low <= 122 )
      {
            putchar(low);
            low += 1;
      }
      while (up <= 90)
      {
            putchar(up);
            up += 1;
      }
      putchar('\n');
      return (0);
}

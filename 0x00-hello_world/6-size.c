#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints the size of an int type in bytes
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
int i;
long int li;
long long int lli;
float f;
printf("Size of an int: %lu byte(s)\n", sizeof(c));
printf("Size of an int: %lu byte(s)\n", sizeof(i));
printf("Size of an int: %lu byte(s)\n", sizeof(li));
printf("Size of an int: %lu byte(s)\n", sizeof(lli));
printf("Size of an int: %lu byte(s)\n", sizeof(f));
return (0);
}

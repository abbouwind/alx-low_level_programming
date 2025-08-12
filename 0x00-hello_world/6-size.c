#include <stdio.h>

int main(void)
{
	puts("Size of a char:%zu byte(s)", sizeof(char));
	puts("Size of an int:%zu byte(s)", sizeof(int));
	puts("Size of a long int:%zu byte(s)", sizeof(long));
	puts("Size of a long long int:%zu byte(s)", sizeof(long long));
	puts("Size of a float:%zu byte(s)", sizeof(float));
	return (0);
}

#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;
	printf("Size of a char: %lu byte(s)\n", (int)sizeof(a));
	printf("Size of a int: %lu byte(s)\n", (int)sizeof(b));
	printf("Size of a long int: %lu byte(s)\n", (int)sizeof(c));
	printf("Size of a long long int: %lu byte(s)\n", (int)sizeof(d));
	printf("Size of a float: %lu byte(s)\n", (int)sizeof(e));
	
	return (0);
}

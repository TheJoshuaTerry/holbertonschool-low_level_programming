/**
 * File: 0-positive_or_negative.c
 *
 * Auth: Joshua Terry()
 */
#include <stdlib.h>
#include <time.h>
 /**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
 int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
    {
        printf("%i is negative", n);
    }
    else if (n > 0)
    {
        printf("%i is positive", n);
    }
    else if (n == 0)
    {
        printf("%i is zero", n);
    }
	return (0);
}
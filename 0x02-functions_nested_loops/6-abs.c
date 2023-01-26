#include "main.h"
#include <stdio.h>
/**
 * _abs - see description
 * @n: number
 * Description: Print alpha 10 times
 * Return: Always 0 (Success)
*/
int _abs(int n)
{
	if (n > 0)
	{
		_putchar(n + '0');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		n = n * -1;
		_putchar(n + '0');
		return (-1);
	}
}

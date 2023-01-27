/*
 * File: 9-times_table.c
 *
 * Auth: Joshua Terry
*/
#include "main.h"
#include <stdio.h>
/**
 * times_table - see description
 * Description: Print times tables to 9
 * Return: void
*/
void times_table(void)
{
	int x, y, z;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			z = x * y;

			_putchar(z + '0');
			_putchar(44);
			_putchar(32);
		}
	_putchar(10);
	}
}

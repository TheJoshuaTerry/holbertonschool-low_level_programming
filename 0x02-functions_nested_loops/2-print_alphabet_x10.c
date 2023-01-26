#include "main.h"
#include <stdio.h>
/**
  print_alphabet_10x - Entry point
 *
 * Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
	int i;

	for (int x = 0; x < 10; x++)
	{
		for (i = 97; i < 123; i++)
		{
			_putchar(i);
		}
		_putchar(10);
	}
}

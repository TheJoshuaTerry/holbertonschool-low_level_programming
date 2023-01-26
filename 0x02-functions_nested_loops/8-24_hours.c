#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - see description
 * Description: Print alpha 10 times
 * Return: Always 0 (Success)
*/
void jack_bauer(void)
{
	int min, hour;
	
	for (hour = 0; hour < 24; hour++)
	{
		if (hour < 10)
		{
			_putchar('0');
			_putchar(hour + '0');
		}
		_putchar(hour + '0');
		_putchar(':');
		for (min = 0; min < 60; min++)
		{
			if (min < 10)
			{
				_putchar('0');
				_putchar(min + '0');
			}
			_putchar(min = '0');
		}
	_putchar(10);
	}
}

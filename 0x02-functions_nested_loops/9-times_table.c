#include <stdio.h>
#include "main.h"

/**
 * times_table - Prints the times table of 9
 *
 * Return: nothing
 *
 *
 *
 *
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{

		for (j = 0; j < 10; j++)
		{
			_putchar((i * j) + '0');
			_putchar(',');
		}
		_putchar('\n');
	}
}

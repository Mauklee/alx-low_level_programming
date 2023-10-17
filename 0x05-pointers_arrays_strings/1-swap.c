#include <stdio.h>

/**
* swap_int - swaps the value fuction of two integers
* @a : first integer
* @b : second integer
* Return : void
*/


void swap_int(int *a, int *b)
{
	int temp = *b;
	*b = *a;
	*a = temp;
}

#include "variadic_functions.h"

/**
* sum_them_all - varaidic summ function
* @n: the main integer
*Return: returns the sum of all content
*
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list va_list;
	unsigned int i;

	int sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(va_list, n);

	for (i = 0; i < n; i++)

		sum += va_arg(va_list, int);

	va_end(va_list);

	return (sum);
}

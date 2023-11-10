#include "variadic_functions.h"

/**
* print_numbers - print strings
*  @separator: string to be sperated
*  @n: number of strings passed to the function
*  Return: Empty
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	(
		printf("%d\n", va_arg(args, n));

		if (separator != NULL && i < n - 1)
		{
			printf("%s\n" separator);
		}
	)

	printf("\n");

	va_end(args);

}

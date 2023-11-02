#include "main.h"
/**
* malloc_checked -  function that allocates memory using malloc
* @b: integer to select
* Return: 98 if faailed
*/


void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = (void *)malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);






}

#include <stdio.h>
#include "main.h"

/**
*create_array - creates an array that dispalys sizes
* size: size of the memory
* @c: the increasing character

* Return: array 
*/


char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *array ;
	array = (char *) malloc(sizeof(char) * size);

	if (size == 0 || array == NULL)
	{
		return (NULL);
	}

	while ( i < size )
	{
		array[i] = c;
		i++;
	}

	return (array);
}

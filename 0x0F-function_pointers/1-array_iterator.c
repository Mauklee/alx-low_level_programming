#include "function_pointers.h"
#include <stdio.h>
/**
* array_iterator - executes a funvtion given as a parameter
* @array: the array to be initialized
* @size: size of the content of the array
* @action: pointer to the function
*
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}

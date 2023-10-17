# include "main.h"
#include <string.h>

/**
 * strlen - Returms the length  of a string
 *
 * @s: char s
 *
 * Return: The length of the string
 *
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
	length++;
	s++;
	}

	return (length);
}

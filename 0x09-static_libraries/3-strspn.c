#include <stdio.h>
#include "main.h"
/**
 * _strspn - get the length of the prefix substring
 *
 * @s: the address
 * accept: the amount of memory space to be used
 *
 * Return: the length
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length;
	int isAccepted[256] = {0};

	length = 0;
	while (*accept != '\0')
	{
		isAccepted[(unsigned char)*accept] = 1;
		accept++;
	}

	while (*s && isAccepted[(unsigned char)*s])
	{
		length++;
		s++;
	}

	return (length);

}


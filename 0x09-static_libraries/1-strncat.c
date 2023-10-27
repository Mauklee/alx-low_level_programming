#include "main.h"
/**
* _strncat - _strchat appends the src string to the dest string
* @dest: destination pointer
* @src: source string
* @n: the value
* Return:;wq dest
*/

char *_strncat(char *dest, char *src, int n)
{
	char *dest_ptr = dest;

	while (*dest_ptr != '\0')
	{
		dest_ptr++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
		n--;
	}
	*dest_ptr = '\0';

	return (dest);

}


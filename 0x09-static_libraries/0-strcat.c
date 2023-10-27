#include "main.h"
/**
* _strcat - _strchat appends the src string to the dest string
* @dest: destination pointer
* @src: source string
* Return:;wq dest
*/

char *_strcat(char *dest, char *src)
{
	char *dest_ptr = dest;

	while (*dest_ptr != '\0')
	{
		dest_ptr++;
	}
	while (*src != '\0')
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
	}
	*dest_ptr = '\0';

	return (dest);

}



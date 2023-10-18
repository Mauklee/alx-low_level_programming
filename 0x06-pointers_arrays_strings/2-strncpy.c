#include "main.h"
/**
* _strncpy - _strcpy copies thes tring
* @dest: destination pointer
* @src: source string
* @n: the value
* Return:;wq dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	char *dest_ptr = dest;

	while (*src != '\0' && n > 0)
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*dest_ptr = '\0';
		dest_ptr++;
		n--;
	}

	return (dest);
}

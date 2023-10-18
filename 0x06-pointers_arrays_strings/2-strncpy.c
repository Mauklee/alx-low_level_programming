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
	int i = 0;

	while (i < n)
	{
		if (*src != '\0')
		{
			*dest_ptr = *src;
			src++;
		}
		else
		{
			*dest_ptr = '*';
		}
		 dest_ptr++;
		 i++;
	}
	while (i < n)
	{
		*dest_ptr = '\0';
		dest_ptr++;
		
	}
	
	return (dest);
}

#include "main.h"
/**
* leet - Decode a string
* @str: a char array
* Return: decoded string
*/

char *leet(char *str)
{
	char *ptr = str;
	int i;
	char uppercase[] = "AEOTL";
	char lowercase[] = "aeotl";
	char code[] = "43071";

	while (*ptr)
	{
		for (i = 0; lowercase[i] != '\0'; i++)
		{
			if (*ptr == lowercase[i] || *ptr == uppercase[i])
			{
				*ptr = code[i];
			}
		}
		ptr++;
	}
	return (str);
}

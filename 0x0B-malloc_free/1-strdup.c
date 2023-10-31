#include "main.h"

/**
 * _strdup - Duplicates a string and returns a pointer to the duplicate.
 *
 * @str: the string
 *
 * Return: pointer to the new string or NULL if it fails
 */

char *_strdup(char *str)
{
	int i;
	int count;
	char *string;

	if (str == 0)
		return (NULL);
	
	count = 0;
	
	while (str[count] != '\0')
		count++;
	
	string = (char *)malloc(sizeof(char)*(count+1));

	if (string == NULL)
	{
		return(NULL);
	}
	else
	{
		while (i < count)
		{
			string[i] = str[i];
			i++;
		}
	}
	
	return(string);

}

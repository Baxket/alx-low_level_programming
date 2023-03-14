#include "main.h"
#include <stdlib.h>

/**
* _strdup - returns a pointer to a newly allocated space in memory,
* which contains a copy of the string given as a parameter.
* @str: the source string
* Description: returns a pointer to a newly allocated space in memory,
* which contains a copy of the string given as a parameter.
* Return: returns a pointer to the duplicated string.
* It returns NULL if insufficient memory was available
*/
char *_strdup(char *str)
{
	char *c;
	int i, length = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[length] != '\0')
	{
		length++;
	}
	c = (char *)malloc((sizeof(char) * length) + 1);
	if (c == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length; i++)
	{
		c[i] = str[i];
	}
	c[length] = '\0';

	return (c);
}

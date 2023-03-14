#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - it concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Description: it concatenates two strings.
 * Return: a pointer to a newly allocated space in memory which
 * contains the contents of s1, followed by the contents of s2,
 * and null terminated. NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len1 = 0, len2 = 0, length = 0;
	char *result;

	if (s1 != NULL)
	{
		i = 0;
		while (s1[i++] != '\0')
			len1++;
	}

	if (s2 != NULL)
	{
		i = 0;
		while (s2[i++] != '\0')
			len2++;
	}

	length = len1 + len2;
	result = (char *)malloc(sizeof(char) * (length + 1));
	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		result[i] = s1[i];
	}
	for (j = 0; j < len2; j++, i++)
	{
		result[i] = s2[j];
	}
	result[length] = '\0';

	return (result);
}

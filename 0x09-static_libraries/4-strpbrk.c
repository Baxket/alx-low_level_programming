#include "main.h"
/**
*_strpbrk - a function
*@s: it is a pointer
*@accept: it is a pointer
*Description: It searches a string for any of a set of bytes
*Return: 0
*/
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}

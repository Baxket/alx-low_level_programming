#include "main.h"
/**
*_strlen - a function
*@s: it is a pointer
*
*Description: prints length of a string
*Return: 0
*/
int _strlen(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
	c++;
	*s++;
	}
	return (c);
}

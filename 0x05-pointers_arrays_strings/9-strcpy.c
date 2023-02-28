#include "main.h"
/**
*_strlen - a function
*@s: it is a pointer
*
*Description: prints length of a string
*Return: 0
*/
char *_strcpy(char *dest, char *src)
{
        int c;

	for (c = 0; src[c] != '\0'; c++)
	{
		dest[c] = src[c];
	}
	dest[c] = '\0';
	return (dest);
}

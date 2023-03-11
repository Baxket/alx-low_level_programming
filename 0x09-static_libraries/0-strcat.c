#include "main.h"
/**
 *_strcat - a function
 *@dest: it is a pointer
 *@src: it is a pointer
 *Description:Concatenate two strings
 *Return: 0
 */
char *_strcat(char *dest, char *src)
{
	char *c = dest;

	for ( ; *dest; )
	{
		dest++;
	}

	for ( ;	*src; )
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (c);
}

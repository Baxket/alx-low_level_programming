#include "main.h"
/**
*_memcpy - a function
*@dest: it is a pointer
*@src: it is a pointer
*@n: it is an integer
*Description: It copies memoery area
*Return: 0
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

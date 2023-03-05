#include "main.h"
/**
*_memset - a function
*@s: it is a pointer
*@b: it is a pointer
*@n: it is an integer
*Description: It fills memoery with a constant byte
*Return: 0
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	s[i] = b;
	}

	return (s);
}

#include "main.h"
/**
*string_toupper - a function
*@s: it is a pointer
*Description: it capitalizes a string
*Return: 0
*/
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) -= 32;
		i++;
	}
	return (s);
}

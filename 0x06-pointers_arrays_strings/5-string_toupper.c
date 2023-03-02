#include "main.h"
/**
*_strcat - a function
*@dest: it is a pointer
*@src: it is a pointer
*Description:Concatenate two strings
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

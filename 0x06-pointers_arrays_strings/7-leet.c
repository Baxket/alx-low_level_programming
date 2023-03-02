#include "main.h"
/**
*leet - a function
*@c: it is a pointer
*
*Description:Concatenate two strings
*Return: 0
*/
char *leet(char *c)
{
	int i, j;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (c[i] == a[j])
			{
				c[i] = b[j];
			}
		}
	}
	return (c);
}

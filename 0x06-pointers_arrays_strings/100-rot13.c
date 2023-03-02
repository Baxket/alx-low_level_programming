#include "main.h"
/**
*rot13 - a function
*@c: it is a pointer
*
*Description: encodes a string using rot13
*Return: 0
*/
char *rot13(char *c)
{
	int i, j;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j <= 51; j++)
		{
			if (a[j] == c[i])
			{
				c[i] = b[j];
				break;
			}
		}
	}
	return (s);
}

#include "main.h"
/**
*cap_string - a function
*@s: it is a pointer
*Description:Concatenate two strings
*Return: 0
*/
char *cap_string(char *s)
{
	int i = 0, j;
	char a[] = " \t\n,;.!?\"(){}";

	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			if (i == 0)
				*(s + i) -= 32;
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (a[j] == *(s + i - 1))
					{
						*(s + i) -= 32;
					}
				}
			}
		}
		i++;
	}
	return (s);
}

#include "main.h"
/**
* _strlen_recursion - print a string
*@s:string
*Description: It returns the length of a string
*Return:void
*/
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		s++;
		i++;
		i += _strlen_recursion(s);

	}
	return (i);
}

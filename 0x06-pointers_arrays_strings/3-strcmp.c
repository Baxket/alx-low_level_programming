#include "main.h"
/**
*_strcmp - a function
*@s1: it is a pointer
*@s2: it is a pointer
*Description: Compares two strings
*Return: 0
*/
int _strcmp(char *s1, char *s2)
{
for (; *s1 && *s2; )
{
if (*s1 != *s2)
{
return (*s1 - *s2);
}
*s1++;
*s2++;
}
return (0);
}

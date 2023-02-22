#include "main.h"
/**
*_islower - checks if input is lowercase
*@c: it is an intger
*
*Description: checks if parameter c is lowercase and returns 0 or 1'
*Return: 0
*/
int _islower(int c)
{
char a;
for (a = 'a' ; a <= 'z' ; a++)
{
if (a == c)
{
return (1);
}
}
return (0);
}

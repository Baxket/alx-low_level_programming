#include "main.h"
/**
*_isdigit - checks if input is a number
*@c: it is an intger
*
*Description: checks if parameter c is a number and returns 0 or 1'
*Return: 0
*/
int _isdigit(int c)
{
if (c >= 'a' && c <= 'z')
{
return (0);
}
else if (c >= '0' && c <= '9')
{
return (1);
}
return (0);
}

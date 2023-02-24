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
if (c >= 0 && c <= 9)
{
return (1);
}
else if (c % 10 >= 0 && c % 10 <= 9)
{
return (0);
}
return (0);
}

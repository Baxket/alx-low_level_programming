#include "main.h"
/**
*_isupper - checks if input is uppercase
*@c: it is an intger
*
*Description: checks if parameter c is lowercase and returns 0 or 1'
*Return: 0
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
return (0);
}

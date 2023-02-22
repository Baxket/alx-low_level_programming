#include "main.h"
/**
*_isalpha - checks if input is an alphabet
*@c: it is an intger
*description: checks if parameter c is an aplphabet and returns 0 or 1'
*Return: 0
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
return (0);
}

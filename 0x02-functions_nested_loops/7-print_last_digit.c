#include "main.h"
/**
*print_last_digit - prints the last digit of a number
*@c: it is an intger
*description: returns the last digit of a the input
*Return: 0
*/
int print_last_digit(int c)
{
_putchar('0' + c % 10);
return (c % 10);
}

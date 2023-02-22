#include "main.h"
/**
*print_last_digit - prints the last digit of a number
*@c: it is an intger
*description: returns the last digit of a the input
*Return: 0
*/
int print_last_digit(int c)
{
int last = c % 10;
_putchar('0' + last);
return (c % 10);
}

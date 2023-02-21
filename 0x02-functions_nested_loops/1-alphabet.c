#include "main.h"
/**
*print_alphabet - prints all lowercase alphabets
*description: 'prints alphabets'
*Return: void
*/
void print_alphabet(void)
{
char a = 'a';
for (a = 'a' ; a <= 'z' ; a++)
{
_putchar(a);
}
_putchar('\n');
}
/**
* main - check the code
*
* Return: Always 0
*/
int main(void)
{
print_alphabet();
return (0);
}

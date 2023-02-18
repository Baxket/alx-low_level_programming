#include <stdio.h>
/**
*main - Entry point
*Description: 'outpus a sentence with puts'
*Return: Always 0(Success)
*/
int main(void)
{
char n = 'a';
while (n <= 'z')
{
putchar(n);
n++;
}
putchar('\n');
return (0);
}

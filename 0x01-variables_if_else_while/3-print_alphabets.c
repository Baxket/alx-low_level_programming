#include <stdio.h>
/**
*main - Entry point
*Description: 'outpus a sentence with puts'
*Return: Always 0(Success)
*/
int main(void)
{
char n = 'a';
char c = 'A';
while (n <= 'z')
{
putchar(n);
n++;
}
while (n <= 'Z')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}

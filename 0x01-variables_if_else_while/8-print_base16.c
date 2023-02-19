#include <stdio.h>
/**
*main - Entry point
*Description: 'outpust all base6 numbers'
*Return: Always 0(Success)
*/
int main(void)
{
int n;
char c;
for (n = 0 ; n < 10 ; n++)
{
putchar(48 + n);
}
for (c = 'a'; n < 'g' ; n++)
{
putchar(n);
}
putchar('\n');
return (0);
}

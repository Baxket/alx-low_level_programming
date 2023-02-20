#include <stdio.h>
/**
*main - Entry point
*Description: 'outpus a sentence with puts'
*Return: Always 0(Success)
*/
int main(void)
{
int i, k, p, q;
for (p = 0; p < 10; p++)
{
for (q = 0; q < 10; q++)
{
for(i = 0 ; i < 10 ; i++)
{
for(k = q + 1 ; k < 10 ; k++)
{
putchar(48 + p);
putchar(48 + q);
putchar(' ');
putchar(48 + i);
putchar(48 + k);
putchar(',');
}
}
}
}
putchar('\n');
return (0);
}

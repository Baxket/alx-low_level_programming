#include <stdio.h>
/**
*main - Entry point
*Description: 'outpus a sentence with puts'
*Return: Always 0(Success)
*/
int main(void)
{
int n, j, k;
for (n = 0 ; n < 10 ; n++)
{
for (j = n + 1 ; j < 10 ; j++)
{
for (k = j + 1 ; k < 10 ; k++)
{
if (n != j && n != k)
{
putchar(48 + n);
putchar(48 + j);
putchar(48 + k);
if (n < 7)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}

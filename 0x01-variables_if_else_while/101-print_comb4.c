#include <stdio.h>
/**
*main - Entry point
*Description: 'outpus a sentence with puts'
*Return: Always 0(Success)
*/
int main(void)
{
int n, j;
for (n = 0 ; n < 10 ; n++)
{
for (j = n + 1 ; j < 10 ; j++)
{
for (k = n + 2 ; k < 10 ; k++)
{
if (n != j)
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
j++;
}
putchar('\n');
return (0);
}

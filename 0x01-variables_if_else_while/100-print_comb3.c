#include <stdio.h>
/**
*main - Entry point
*Description: 'outpus a sentence with puts'
*Return: Always 0(Success)
*/
int main(void)
{
int n;
int j;
for (n = 0 ; n < 10 ; n++)
{
while (j < 10)
{
if (n != j)
{
putchar(48 + n);
putchar(48 + j);
if (n < 9)
{
putchar(',');
putchar(' ');
}
}
}
j++;
}
putchar('\n');
return (0);
}

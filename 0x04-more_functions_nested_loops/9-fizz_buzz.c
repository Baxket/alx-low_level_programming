#include <stdio.h>
/**
* main - Entry point
* Description: 'print a sentence with printf'
* Return: Always 0 (Success)
*/
int main(void)
{
int a, b;
for (a = 1; a <= 100; a++)
{
if (a % 3 == 0)
{
printf("Fizz");
}
else if (a % 5 == 0)
{
printf("Buzz");
}
else
{
if (a / 10)
{
printf("%d", a);
}
if (a < 100)
printf(" ");
}
printf("\n");
return (0);
}

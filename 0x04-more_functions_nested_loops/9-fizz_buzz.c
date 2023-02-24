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
		_putchar('F');
		_putchar('i');
		_putchar('z');
		_putchar('z');
	}
	else if (a % 5 == 0)
	{
		_putchar('B');
		_putchar('u');
		_putchar('z');
		_putchar('z');
	}
	else
	{
		if (a / 10)
		{
			_putchar('0' + a / 10);
		}
		_putchar('0' + a % 10);
	}
	if (a < 100)
		_putchar(' ');
}
_putchar('\n');

return (0);
}

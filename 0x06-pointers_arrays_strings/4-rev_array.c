#include "main.h"
/**
*reverse_array - a function
*@a: it is a pointer
*@n: it is a pointer
*Description: reverse an array
*Return: 0
*/
void reverse_array(int *a, int n)
{
	int i, b;

for (i = 0; (i < (n - 1) / 2); i++)
	{
	b = a[i];
	a[i] = a[n - 1 - i];
	a[n - 1 - i] = b;
	}
}

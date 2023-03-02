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
	int i = 0, b, c;
	char d;

	while (a[i] != '\0')
	{
		i++;
	}
	c = n - 1;
	for (b = 0; c >= 0 && b < c; c--, b++)
	{
		d = a[b];
		a[b] = a[c];
		a[c] = d;
	}
}

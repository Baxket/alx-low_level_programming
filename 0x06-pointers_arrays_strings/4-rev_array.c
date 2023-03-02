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
	char d;

	c = n - 1;
	for (i = 0; i < n--; i++ )
	{
		d = a[i];
		a[i] = a[n];
		a[n] = d;
	}
}

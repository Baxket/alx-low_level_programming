#include "main.h"
#include <stdio.h>
/**
*print_array - a function
*@a: it is a pointer, the array
*@n: it is an integer, the length
*Description: prints every index of an array
*Return: 0
*/
void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		if (c < n - 1)
		{
		printf("%d, ", a[c]);
		}
		else
		{
		printf("%d", a[c]);
		}
	}
printf("\n");
}

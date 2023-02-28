#include "main.h"
#include <stdio.h>
/**
*_strlen - a function
*@s: it is a pointer
*
*Description: prints length of a string
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

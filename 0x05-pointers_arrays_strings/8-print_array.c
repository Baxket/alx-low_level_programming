#include "main.h"
/**
*_strlen - a function
*@s: it is a pointer
*
*Description: prints length of a string
*Return: 0
*/
void print_array(int *a, int n)
{
	int c, x;

	for (c = 0; c < n; c++)
	{
		if (x < n - 1)
		{
		printf("%d, ", a[x]);
		}
		else
		{
		printf("%d", a[x]);
		}
	}
printf("\n");
}

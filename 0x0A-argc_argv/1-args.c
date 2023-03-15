#include <stdio.h>
/**
*main - Entry point
*@argc: an integer
*@argv: a pointer
*Description: 'outpus a sentence with puts'
*Return: Always 0(Success)
*/
int main(int argc, char **argv)
{
	(void)argc;

	printf("%d\n", argc - 1);
	return (0);
}

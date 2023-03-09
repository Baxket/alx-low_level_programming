#include "main.h"
/**
 * _strlen_recursion - Prints the length of a string.
 * @s: the string to be printed
 * Description: it prints the lenght of a string
 * Return: the length of string
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		s++;
		return (1 + _strlen_recursion(s));
	return (0);
}
/**
 * pal_checker - check if s is palindrome.
 * @s: string base address.
 * @i: left index.
 * @j: rigth index.
 * Description: it checks for palindrome or not
 * Return: 1 if s is palindrome, 0 otherwise.
 */
int check(char *s, int i, int j)
{
	if (s[i] == s[j])
		if (i > j / 2)
			return (1);
		else
			i++;
			j--;
			return (check(s, i, j));
	else
		return (0);
}
/**
 * is_palindrome - check if s is palindrome
 * @s: base address for string.
 * Description : it returns 1 if a string is a palindrome and 0 if not
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_palindrome(char *s)
{
	return (check(s, 0, _strlen_recursion(s) - 1));
}

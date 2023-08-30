#include "main.h"
#include <string.h>
/**
 * check_palindrome - helper function to check recursion
 * @s: beginning of string
 * @end: end of string
 *
 * Return: 1 if true 0 otherwise
 */
int check_palindrome(char *s, char *end)
{
	if (s >= end)
	{
		return (1);
	}

	if (*s != *end)
	{
		return (0);
	}
	return (check_palindrome(s + 1, end - 1));
}
/**
 * is_palindrome -a function to check if palindrome of not
 * @s: string to be checked
 *
 * Return: 1 if true 0 otherwise
 */
int is_palindrome(char *s)
{
	char *end = s + strlen(s) - 1;

	return (check_palindrome(s, end));
}

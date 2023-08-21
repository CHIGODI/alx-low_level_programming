#include "main.h"
/**
 * rev_string -function that reverses a string
 * @s: string to be reversed
 *
 * Return: void
 *
 */
void rev_string(char *s)
{
	int len = 0;
	int i, j;
	char tmp;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = len - 1, j = 0; i > j; i--, j++)
	{
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;
	}
}

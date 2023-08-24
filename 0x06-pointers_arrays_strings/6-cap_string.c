#include "main.h"
/**
 * _islower - function to check if letter is lowecase
 * @c: character to be checked
 *
 * Return: c
 */

int _islower(char c)
{
	return (c >= 'a' && c <= 'z');
}

/**
 * _toupper - function to change character to uppercase
 * @c: character to be used
 *
 * Return: c
 */

char _toupper(char c)
{
	if (_islower(c))
	{
		return (c - 'a' + 'A');
	}
	return (c);
}

/**
 * cap_string - function that capitalises words of a string
 * @s: string to be used
 *
 * Return: s
 */
char *cap_string(char *s)
{
	int i;

	if (s[0] != '\0')
	{
		s[0] = _toupper(s[0]);
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ' || s[i] == '.' || s[i] == '\t' || s[i] == '\n'
		   || s[i] == ',' || s[i] == ';' || s[i] == '!'
		   || s[i] == '?' || s[i] == '"' || s[i] == '('
		   || s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			s[i + 1] = _toupper(s[i + 1]);
		}
	}
	return (s);
}

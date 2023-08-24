#include "main.h"
/**
 * string_toupper - a function that changes all lowercase letters of a
 *                  string to uppercase
 * @str: string to be used
 *
 * Return: 0
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		switch (str[i])
		{
		case 'a': case 'b': case 'c': case 'd': case 'e':
		case 'f': case 'g': case 'h': case 'i': case 'j':
		case 'k': case 'l': case 'm': case 'n': case 'o':
		case 'p': case 'q': case 'r': case 's': case 't':
		case 'u': case 'v': case 'w': case 'x': case 'y':
		case 'z':
			str[i] = str[i] - 'a' + 'A';
			break;
		}
	}
	return (str);
}

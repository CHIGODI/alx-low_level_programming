#include "main.h"
/**
 * _isalpha - Function that checks for alphabet characters.
 * @c: the character to be checked.
 *
 * Return: 1 is letter 0 otherwise.
 *
 */
int _isalpha(int c)
{
	char l, k;
	int flag = 0;

	for (l = 'a', k = 'A'; l <= 'z' && k <= 'Z'; l++, k++)
	{
		if (c == l || c == k)
		{
			flag = 1;
			break;
		}
	}
	if (flag == 1)
		return (1);
	return (0);
}

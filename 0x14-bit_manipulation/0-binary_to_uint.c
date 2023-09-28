#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned in
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number. 0 if b is NULL / here is one or more
 *                 chars in the string b that is not 0 or 1
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			result = result << 1;
			result += b[i] - '0';
			i++;
		} else
		{
			return (0);
		}
	}

	return (result);
}

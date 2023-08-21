#include "main.h"
/**
 * puts_half - function that prints half a string, followed by newline
 *           -should print secon half
 *           - if number of characters is odd print last n characters
 *           - n = (length_of_the_string - 1)/2
 * @str: string to be used
 *
 * Return: void
 *
 */
void puts_half(char *str)
{
	int i, n, length_of_the_string = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		length_of_the_string++;
	}

	if (length_of_the_string % 2 != 0)
	{
		n = (length_of_the_string - 1) / 2;

		for (i = n; i < length_of_the_string; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		n = length_of_the_string / 2;

		for (i = n; i < length_of_the_string; i++)
		{
			_putchar(str[i]);
		}
	}
}

#include "main.h"
/**
 * puts2 -a function that prints every other character of a string
 *         starting with the first character followed by new line
 *
 * @str: string to be used
 *
 * Return: void
 *
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0' && str[i] != 'H'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

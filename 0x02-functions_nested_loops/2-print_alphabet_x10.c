#include "main.h"
/**
 * print_alphabet_x10 - A function to print alphabtes(lowercase) ten times.
 *
 * Return: Always 0 (Success)
 *
 */

void print_alphabet_x10(void)
{
	int ten = 0, alphabets;

	while (ten <= 10)
	{
		for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
		{
			_putchar(alphabets);
		}
		ten++;
		_putchar('\n');
	}
}

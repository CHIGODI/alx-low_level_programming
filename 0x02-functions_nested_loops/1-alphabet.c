#include "main.h"
/**
 * print_alphabet - A function to loop over alphabets.
 *
 */
void print_alphabet(void)
{
	int alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		_putchar(alphabets);
	}
	_putchar('\n');
}

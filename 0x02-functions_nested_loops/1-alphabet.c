#include <stdio.h>
/**
 * main - A program to print alphabets in lowercase using putchar function.
 *
 * Return: Always 0(Success)
 *
 */
void print_alphabet(void);

int main(void)
{
	print_alphabet();
	putchar('\n');
	return (0);
}
/**
 * print_alphabet_x10 - A function to loop over alphabets.
 *
 */
void print_alphabet(void)
{
	int alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		putchar(alphabets);
	}
}

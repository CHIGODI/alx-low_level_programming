#include <stdio.h>
/**
 * main - A program that prints lower case alphabets inn reverse.
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char alphabets_reverse;

	for (alphabets_reverse = 'z'; alphabets_reverse >= 'a';
	     alphabets_reverse--)
	{
		putchar(alphabets_reverse);
	}
	putchar('\n');
	return (0);
}

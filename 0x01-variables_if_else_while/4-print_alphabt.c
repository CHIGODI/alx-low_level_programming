#include <stdio.h>
/**
 * main - A program that prints all alphabets except e and q.
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'e' || letter == 'q')
		{
			continue;
		}
		putchar(letter);
	}
	putchar('\n');
	return (0);
}

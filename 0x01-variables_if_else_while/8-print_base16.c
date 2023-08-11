#include <stdio.h>
/**
 * main -A  program that print all lowercase base 16 numbers.
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int hexadecimal;

	for (hexadecimal = 0; hexadecimal <= 15; hexadecimal++)
	{
		printf("%x", hexadecimal);
	}
	printf("\n");
	return (0);
}

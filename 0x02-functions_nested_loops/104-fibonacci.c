#include <stdio.h>
/**
 * main - a program that finds and prints the first 98 Fabonacci numbers
 *       starting with 1 and 2 folowed by new line.
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	long int curr = 2, prev = 1, next, i;

	printf("%d, %d, ", 1, 2);
	for (i = 1; i < 98; i++)
	{
		next = curr + prev;
		prev = curr;
		curr = next;
		printf("%lu", next);
		if (i < 97)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}

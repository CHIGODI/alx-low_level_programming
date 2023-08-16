#include <stdio.h>
/**
 * main - program that prints first 50 Fabonacci numbers
 *        starting with 1 and 2.
 *
 * Return: 0 (Success)
 *
 */
int main(void)
{
	int end = 50;
	long long int current = 2, previous = 1;
	int i;

	for (i = 0; i < end; i++)
	{
		printf("%lld", previous);
		if (i < end - 1)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}
		long long int next = previous + current;

		previous = current;
		current = next;
	}
	return (0);
}

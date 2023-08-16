#include <stdio.h>
/**
 * main - a program that prints sum of even numbers in fabonacci series that
 *       are less than 400,000.
 *
 * Return: 0 (Sucess).
 *
 */
int main(void)
{
	long int prev = 1, curr = 2, next, sum = 0, i;

	while (prev < 400000)
	{
		next = curr + prev;
		prev = curr;
		curr = next;
		if (prev % 2 == 0)
		{
			sum += prev;
		}
	}
	printf("%ld", sum);
	printf("\n");
	return (0);
}

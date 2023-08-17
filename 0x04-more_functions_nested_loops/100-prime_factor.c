#include <stdio.h>
#include <math.h>
/**
 * main - Entry point
 *
 * Description: Finds and prints the largest prime factor of a number.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int num = 612852475143;
	long int largest_PrimeFactor = 2;

	while (num > largest_PrimeFactor)
	{
		if (num % largest_PrimeFactor == 0)
		{
			num /= largest_PrimeFactor;
		}
		else
		{
			largest_PrimeFactor++;
		}
	}
	printf("%ld\n", largest_PrimeFactor);
	return (0);
}

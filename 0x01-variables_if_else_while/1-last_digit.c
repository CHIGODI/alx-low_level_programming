#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - A program that prints the last digit stored in the variable n.
 *        followed by if the last digit of n is greater than
 *          - 5: the string and is greater than 5
 *         - 0: the string and is 0
 *	   - less than 6 and not 0: the string and is less than 6 and not 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastDigit = n % 10;

	if (lastDigit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastDigit);
	}
	else if (n < 0 || lastDigit < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
		       n, lastDigit);
	}
	else if (n > 0 && lastDigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n,
		       lastDigit);
	}

	return (0);
}

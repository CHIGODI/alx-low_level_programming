#include <stdio.h>
/**
 * main - A program that prints numbers from 1 to 100 followed by a
 *        line. But for multiples of three prints Fizz instead of the
 *        number and for multiples of five print Buzz. For numbers
 *        which are both FizzBuzz.
 *
 *Return: Always 0 (Success)
 *
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (num % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d", num);
		}
	}
	printf("\n");
	return (0);
}

#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: A program that prints a provided string exactly as it is.
 *
 * Return: Always 1 (error)
 */
int main(void)
{
	/* Write the string to standard error (file descriptor 2) */
	write(2,
	      "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	      59);
	return (1);
}

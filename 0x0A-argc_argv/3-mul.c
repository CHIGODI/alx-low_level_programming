#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point of program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc  == 1)
	{
		printf("Error");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
		return (0);
	}
}

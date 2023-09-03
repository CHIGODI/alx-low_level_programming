#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * main - entry point of the program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int sum = 0, num;

	if (argc < 3)
	{
		printf("0\n");
		return (1);
	}
	else if (argc >= 3)
	{
		for (i = 1; i < argc; i++)
		{
			if (argv[i] >= 'a' && argv[i]!= 'z')
			{
				printf("Error\n");
				return (1);
			}
			num = atoi(argv[i]);
			sum += num;
		}
		printf("%d\n", sum);
	}
	return (0);
}

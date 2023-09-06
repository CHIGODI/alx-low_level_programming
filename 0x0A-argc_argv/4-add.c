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
	int sum = 0;
	int i, n, j;

	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
				{
					printf("Error\n");
					return (1);
				}
				n = atoi(argv[i]);
			}
			sum += n;
		}
		printf("%d\n", sum);
	}
	return (0);
}

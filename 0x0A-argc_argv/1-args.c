#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * main - entry point of program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 success
 */
int main(char* argv[])
{
	int i, len = 0;

	for (i = 0; argv[i] != NULL; i++)
	{
		len++;
	}
	printf("%d\n", len);
	return (0);
}

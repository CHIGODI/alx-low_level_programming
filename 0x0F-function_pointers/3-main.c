#include "3-calc.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: 0 Success.
 */
int main(int ac, char *av[])
{
	int num1, num2, result;
	char *op;

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(av[1]);
	op = av[2];
	num2 = atoi(av[3]);

	if (*op != '+' && *op != '-' && *op != '*' && *op != '/' && *op != '%')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' || *op == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = get_op_func(op)(num1, num2);

	printf("%d\n", result);
	return (0);
}

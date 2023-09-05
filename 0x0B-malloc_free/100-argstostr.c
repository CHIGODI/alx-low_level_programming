#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Concatenates all arguments of a program.
 * @ac: Number of arguments.
 * @av: Array of argument strings.
 *
 * Return: Pointer to the concatenated string or NULL on failure.
 */
char *argstostr(int ac, char **av)
{
	int i, j, total_len = 0;
	char *concatenated;
	int k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			total_len++;
		}
		total_len++;
	}
	concatenated = (char *)malloc(total_len * sizeof(char) + 1);
	if (concatenated == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			concatenated[k++] = av[i][j];
		}
		concatenated[k++] = '\n';
	}
	concatenated[k] = '\0';
	return (concatenated);
}

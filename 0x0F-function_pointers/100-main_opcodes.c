#include <stdio.h>
#include <stdlib.h>

int main(int ac, char *av[])
{
	int i;
	int p;
	int (*mainPtr)(int argc, char *argv[]) = &main;

	if (ac != 2)
	{
		printf("Error\n");
		exit(1);
	}

	p = atoi(av[1]);
	if (p < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < p; i++)
	{
		printf("%02x", ((unsigned char *)mainPtr)[i]);
	}
	printf("\n");
	return (0);
}

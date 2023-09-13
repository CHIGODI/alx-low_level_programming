#include <stdio.h>
#include <stdlib.h>

/**
 * main - print own opcode
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
    int i;
    unsigned char *ptr = (unsigned char *)main;
    int p;

    if (argc != 2)
    {
        printf("Error\n");
        exit(1);
    }

    p = atoi(argv[1]);

    if (p < 0)
    {
        printf("Error\n");
        exit(2);
    }

    for (i = 0; i < p; i++)
    {
        printf("%02x ", ptr[i]);
    }

    printf("\n");
    return (0);
}

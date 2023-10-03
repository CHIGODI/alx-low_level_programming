#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

/**
 * main - Entry point for the cp program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * This program copies the content of one file to another file.
 *
 * Return: 0 on success, or an error code on failure.
 */
int main(int argc, char *argv[])
{
	FILE *fp_from, *fp_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fp_from = fopen(argv[1], "r");
	if (fp_from == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
    }
	fp_to = fopen(argv[2], "w");
	if (fp_to == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n",
			argv[2]);
		exit(99);
	}

	while ((bytes_read = fread(buffer, 1, BUFFER_SIZE, fp_from)) > 0)
	{
		bytes_written = fwrite(buffer, 1, bytes_read, fp_to);
		if (bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n"
				, argv[2]);
			exit(99);
		}
	}
	if (bytes_read < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]);
		exit(98);
	}
	if (fclose(fp_from) == EOF || fclose(fp_to) == EOF)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd\n");
		exit(100);
	}
	return (0);
}

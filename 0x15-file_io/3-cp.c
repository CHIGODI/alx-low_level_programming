#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

/* prototypes */
void open_error(int exit_code, char *message, char *filename);
void close_error(int exit_code, char *message, int fd_value);

/**
 * open_error - prints error message when opening file fails
 * @exit_code: return code
 * @message: error message
 * @filename: name of file that failed to open
 * Return: nothing
 */
void open_error(int exit_code, char *message, char *filename)
{
	dprintf(STDERR_FILENO, "%s %s\n", message, filename);
	exit(exit_code);
}

/**
 * close_error - prints close error to stderr
 * @exit_code: return code
 * @message: error message
 * @fd_value: file descriptor return value
 * Return: nothing
 */
void close_error(int exit_code, char *message, int fd_value)
{
	dprintf(STDERR_FILENO, "%s %d\n", message, fd_value);
	exit(exit_code);
}

/**
 * main - main program entry.
 * @argc: argument count
 * @argv: argument array
 * Return: 0 (success)
 */
int main(int argc, char **argv)
{
	int fd_to = 0, fd_from = 0, bytes_read = 0, f_close = 0, total_bytes = 0;
	char *buffer = NULL;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = malloc(BUFFER_SIZE * sizeof(char));
	/* open source file */
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from < 0)
		open_error(98, "Error: Can't read from file", argv[1]);

	/* open dest file */
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to < 0)
		open_error(99, "Error: Can't write to", argv[2]);

	/* read from source and copy to dest file */
	while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		total_bytes += bytes_read;
		if (write(fd_to, buffer, bytes_read) != bytes_read)
			open_error(99, "Error: Can't write to", argv[2]);
	}
	/* detect error when reading from file */
	if (total_bytes < 0)
	{
		close(fd_from);
		close(fd_to);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", argv[1]);
		exit(98);
	}

	f_close = close(fd_from);
	if (f_close < 0)
		close_error(100, "Error: Can't close", fd_from);

	f_close = close(fd_to);
	if (f_close < 0)
		close_error(100, "Error: Can't close", fd_to);

	free(buffer);
	return (0);
}

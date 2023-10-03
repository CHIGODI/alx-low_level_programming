#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * read_textfile - a function that reads a text file and prints it to the
 * POSIX standard output.
 * @filename: nameof the file
 * @letters: number of letters it to be read and printed
 *
 * Return: actual number of letters 0 if failed
 *
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = 0;
	int bytes_read = 0, bytes_written = 0;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		close(fd);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, letters);
	if (bytes_read == -1 && bytes_read != bytes_written)
	{
		close(fd);
		return (0);
	}

	close(fd);
	return (bytes_read);
}

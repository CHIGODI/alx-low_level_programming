#include "main.h"
#include <stdlib.h>
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
	FILE *fp;
	char *ch;
	ssize_t bytes_read, bytes_written;

	if (filename == NULL)
		return (0);

	fp = fopen(filename, "r");
	if (fp == NULL)
		return (0);

	ch = malloc(letters);
	if (ch == NULL)
	{
		fclose(fp);
		return (0);
	}

	bytes_read = fread(ch, 1, letters, fp);
	if (bytes_read == -1)
	{
		free(ch);
		fclose(fp);
		return (0);
	}

	bytes_written = write(1, ch, bytes_read);
	if (bytes_written == -1 && bytes_written != bytes_read)
	{
		free(ch);
		fclose(fp);
		return (0);
	}

	free(ch);
	fclose(fp);

	return (bytes_written);
}

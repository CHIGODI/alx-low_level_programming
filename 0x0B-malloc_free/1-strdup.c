#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strdup -a function that returns a pointer to a newly
 *                      allocated space in memory, which contains a
 *                      copy of the string given as a parameter.
 * @str: string to  be used
 *
 * Return: Nothing.
 */
char *_strdup(char *str)
{
	if (str == NULL)
		return (NULL);
	return (strdup(str));
}

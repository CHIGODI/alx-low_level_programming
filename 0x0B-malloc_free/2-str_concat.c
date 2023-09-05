#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to newly allocated space  NULL if failure.
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	char *ptr = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	ptr = (char *)malloc(len1 + len2 + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}
	strcpy(ptr, s1);
	strcat(ptr, s2);

	return (ptr);
}

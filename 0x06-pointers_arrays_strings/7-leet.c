#include "main.h"
/**
 * leet - function that encodes a string into 1337
 * @s: strin to be used
 *
 * Return: s
 */

char *leet(char *s)
{
	int i, j;
	char letter[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; letter[j] != '\0'; j++)
		{
			if (s[i] == letter[j])
			{
				s[i] = num[j];
				break;
			}
		}
	}
	return (s);
}

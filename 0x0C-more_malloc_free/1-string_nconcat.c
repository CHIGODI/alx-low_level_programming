#include <stdlib.h>
#include "main.h"
#include <stddef.h>
/**
 * str_len - get length of the string
 * @str: pointer to string
 * Return: return length
 */
unsigned int str_len(char *str)
{
        unsigned int i;

        for (i = 0; str[i] != '\0'; i++)
                ;
        return (i);
}
/**
 * string_nconcat - concatenates strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes of s2
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
        char *s = NULL;
        unsigned int i, j, s1_len = 0;

        if (s1 == NULL)
                s1 = "";
        if (s2 == NULL)
                s2 = "";

        s1_len = str_len(s1);

        if (n >= str_len(s2))
        {
                n = str_len(s2);
        }
                           /* reserve memory for concatenated string */
        s = malloc((s1_len + n + 1) * sizeof(char));

        if (s == NULL)
                return (NULL);
        /* copy s1 */
        for (i = 0; s1[i] != '\0'; i++)
        {
                s[i] = s1[i];
        }

        /* concatenate  */
        for (j = 0; j < n; j++)
        {
                s[i] = s2[j];
                i++;
        }

        /* add null terminator */
        s[i] = '\0';
        return (s);
} 

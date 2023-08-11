#include <stdio.h>

/**
 * main - A program that prints the alphabet in lowercase, followed by a new
 *        line using putchar.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char alphabets[26] = {
        'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
        'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't',
        'u', 'v', 'w', 'x', 'y', 'z'
    };
    int i;

    for (i = 0; i < sizeof(alphabets); i++)
    {
        putchar(alphabets[i]);
        putchar('\n');
    }

    return (0);
}
#include <stdio.h>
/**
 * main - A program that prints the alphabet in lowercase, followed by a new
 *        line using putchar.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char alphabets[26] = {
        'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
        'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't',
        'u', 'v', 'w', 'x', 'y', 'z'
    };
    int i;

    for (i = 0; i < sizeof(alphabets); i++)
    {
        putchar(alphabets[i]);
        putchar('\n');
    }

    return (0);
}

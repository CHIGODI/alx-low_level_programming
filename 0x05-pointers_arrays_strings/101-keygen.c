#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 6

/**
 * generateRandomCharacter - Generates a random uppercase letter.
 *
 * Return: A random uppercase letter.
 */
char generateRandomCharacter(void)
{
    return 'A' + (rand() % 26);
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
    char password[PASSWORD_LENGTH + 1];
    int i;

    srand(time(NULL)); // Seed the random number generator

    for (i = 0; i < PASSWORD_LENGTH; i++)
    {
        password[i] = generateRandomCharacter();
    }

    password[PASSWORD_LENGTH] = '\0'; // Null-terminate the password string

    printf("Generated password: %s\n", password);

    return (0);
}

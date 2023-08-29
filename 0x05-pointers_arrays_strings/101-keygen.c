#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 6

char generateRandomCharacter(void)
{
    return 'A' + (rand() % 8);
}

int main(void)
{
    char password[PASSWORD_LENGTH + 1];
    int i;

    srand(time(NULL));

    password[0] = generateRandomCharacter();
    password[1] = '-';
    password[2] = '@';

    for (i = 3; i < PASSWORD_LENGTH; i++)
        password[i] = generateRandomCharacter();

    password[PASSWORD_LENGTH] = '\0';

    printf("Generated password: %s\n", password);

    return (0);
}

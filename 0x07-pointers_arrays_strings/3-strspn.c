#include "main.h"

/**
 * characterIsInAccept - Checks if a character exists in accept string.
 * @c: The character to check.
 * @accept: The accept string to search in.
 *
 * Return: 1 if character found, 0 otherwise.
 */
int characterIsInAccept(char c, char *accept) {
    while (*accept) {
        if (*accept == c) {
            return 1;
        }
        accept++;
    }
    return 0;
}

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to search in.
 * @accept: The accept string containing allowed characters.
 *
 * Return: Length of initial segment of s consisting only of accept bytes.
 */
unsigned int _strspn(char *s, char *accept) {
    unsigned int length = 0;
    
    while (*s) {
        if (characterIsInAccept(*s, accept)) {
            length++;
        } else {
            break;
        }
        s++;
    }

    return length;
}

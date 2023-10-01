#include "main.h"
/**
 * get_endianness - get s endianness
 *
 * Return: 1 if big indiannes 0 otherwise
 */
int get_endianness(void) {
    unsigned int test = 1;
    char *byte = (char *)&test;

    return (int)(*byte);
}

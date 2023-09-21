#include <stdio.h>
/**
 * entrypointMain - function that prints before main
 *
 * Return: void
 *
 */
void entrypointMain(void) __attribute__((constructor));

void entrypointMain(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}

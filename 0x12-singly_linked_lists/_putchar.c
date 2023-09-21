#include "lists.h"
/**
 * _putchar - prints a character
 * @c: character to be printed
 *
 * Return: no of charatcers printed
 *
 */
int _putchar(char *c)
{
	return (write(1, &c, 1));
}

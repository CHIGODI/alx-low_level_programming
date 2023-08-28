#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to the pointer thatneeds to be set
 * @to: pointer to the value that S should point to
 *
 */
void set_string(char **s, char *to)
{
	*s = to;
}

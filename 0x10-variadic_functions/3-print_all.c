#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - printing anything
 * @format: a list of types of arguments passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	const char *s = format;

	va_start(args, format);

	if (format)
	{
		while (format[i])
		{
			switch (*s)
			{
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
			{
				char *str = va_arg(args, char *);
				if (str)
					printf("%s", str);
				else
					printf("(nil)");
			}
			break;
			default:
				i++;
				break;
			}
			if (*(s + 1))
				printf(", ");
		}
	}
	va_end(args);
	printf("\n");
}

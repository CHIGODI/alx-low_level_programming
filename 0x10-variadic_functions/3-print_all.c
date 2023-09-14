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
	char *s, sp = " ";

	va_start(args, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
			case 'c':
				printf("%c%c", sp, va_arg(args, int);
				break;
			case 'i':
				printf("%c%d", sp, va_arg(args, int));
				break;
			case 'f':
				printf("%c%f", sp, va_arg(args, double));
				break;
			case 's':
			{
				str = va_arg(args, char *);
				if (str)
					printf("%c%s", sp, str);
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

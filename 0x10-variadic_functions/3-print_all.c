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
	char *str, *sept = "";

	va_start(args, format);

	if (format != NULL)
	{
		while (format[i])
		{
			switch (format[i])
			{
			case 'c':
				printf("%s%c", sept, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", sept, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", sept, va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (!str)
					printf("(nil)");
				printf("%s%s", sept, str);
				break;
			default:
				i++;
				continue;
			}
			sept = ", ";
			i++;
		}
	}
	va_end(args);
	printf("\n");
}

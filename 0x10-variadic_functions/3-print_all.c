#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 * print_char - print char
 * @args: list of arguments
 *
 * Return: void
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - print integer
 * @args: list of arguments
 *
 * Return: void
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_string - print string
 * @args: list of arguments
 *
 * Return: void
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_float - print float number
 * @args: list of arguments
 *
 * Return: void
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_all - prints anything
 * @format: the formats saved in string
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	type_t type[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string}
	};
	int i = 0, j;
	va_list args;
	char *separator = "";

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == type[j].type)
			{
				printf("%s", separator);
				type[j].func(args);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}


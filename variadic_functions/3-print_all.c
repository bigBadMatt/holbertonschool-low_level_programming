#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - print a char
 * @all: char to be printed
 * Return: 0 at all times
 */
int print_char(va_list all)
{
	printf("%c", va_arg(all, int));
	return (0);
}

/**
 * print_integer - print an int
 * @all: int to be printed
 * Return: 0 at all times
 */
int print_integer(va_list all)
{
	printf("%d", va_arg(all, int));
	return (0);
}

/**
 * print_float - print a float
 * @all: float to be printed
 * Return: 0 at all times
 */
int print_float(va_list all)
{
	printf("%f", va_arg(all, double));
	return (0);
}

/**
 * print_string - print a string
 * @all:string to be printed
 * Return: 0 at all times
 */
int print_string(va_list all)
{
	char *plc;

	plc = va_arg(all, char *);

	if (plc == NULL)
	{
		plc = "(nil)";
	}
	printf("%s", plc);
	return (0);
}

/**
 * print_all - print all things
 * @format: list of all types to be printed
 *
*/
void print_all(const char * const format, ...)
{
	va_list all;
	int i, k;
	char *sp;
	sel pri[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	va_start(all, format);
	i = 0;
	sp = "";

	while (format != NULL && format[i])
	{
		k = 0;
		while (pri[k].f != NULL)
		{
			if (format[i] == *pri[k].c)
			{
				printf("%s", sp);
				sp = ", ";
				pri[k].f(all);
			}
			k = k + 1;
		}
		i = i + 1;
	}

	printf("\n");
	va_end(all);
}

#include "printf_functions.h"

/**
 * _printf - takes a string and args of each '%'
 * and prints them
 * @format: initial string
 * @...: variable list of arguments
 * Return: number of characters printed.
 */

int _printf(const char *format, ...)
{
	va_list a;
	int count = 0, i = 0, j = 0;
	_printf_functions types[] = {
		{"c", _print_char},
		{"s", _print_string},
		{"i", _print_int},
		{"d", _print_int},
		{"%", _print_mod},
		{NULL, NULL}
	};

	if (format == NULL)
		return (-1);
	va_start(a, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			while (format[++i] == ' ')
				;
			for (j = 0; j < 6; j++)
			{
				if (format[i] == *types[j].convertion_specifier)
				{
					count += types[j].function(a);
					break;
				}
			}
		}
		else
		{
			write(1, &format[i], 1);
			count += 1;

		}
		i++;
	}
	va_end(a);
	return (count);
}


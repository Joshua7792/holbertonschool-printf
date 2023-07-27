#include "printf_functions.h"

/**
 * _printf - 
 * @format: parameter
 * Return: 
 */

int _printf(const char *format, ...);
{
	_printf_functions types[] = {
		{'c', _print_char},
		{'s', _print_string},
		{'i', _print_int},
		{'d', _print_int},
		{'%', _print_mod},
		{NULL, NULL}
	};
};

int i = 0;
int x = 0;

va_start(va_list, args);
	while (format != NULL && format[i])
	{
		x = 0;

		while (x < 5)
		{
			if (format[i] == *types[x].convertion_specifier)
			{
				types[x].function(va_list, args);
			}
			x++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}

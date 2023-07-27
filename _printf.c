#include "printf_functions.h"

/**
 * _printf - 
 * @format: parameter
 * Return: 
 */

int _printf(const char *format, ...);
{
	struct _printf_function _printf_functions[] = {
		{'c', _print_char},
		{'s', _print_string},
		{'i', _print_int},
		{'d', _print_int},
		{'%', _print_mod},
		{NULL, NULL}
	};
};

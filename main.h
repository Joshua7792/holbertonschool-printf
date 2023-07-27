#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct _printf_function - interface for printing
 * @convertion_specifier:character that identifies the type of argument
 * @function: function to run if id matches
 */
typedef struct _printf_function
{
	char *convertion_specifier;
	int (*function)(va_list a);
} _printf_functions;

int _printf(const char *format, ...);
int _print_char(va_list a);
int _print_mod(va_list a);
int _print_string(va_list a);
int _print_int(va_list a);

#endif

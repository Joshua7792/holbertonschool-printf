#include "main.h"

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
	int count = 0, j, i;
	_printf_functions types[] = {{"c", _print_char},
		{"s", _print_string},
		{"i", _print_int},
		{"d", _print_int},
		{"%", _print_mod},
		{NULL, NULL}};

	if (format == NULL)
        return (-1);

    va_start(a, format);
    for (i = 0; format[i]; i++)
    {
        if (format[i] == '%')
        {
            i++; /* Move to the next character after '%' */
            while (format[i] == ' ')
                i++; /* Skip any spaces after '%' */

            /* Find the appropriate conversion specifier in the types array */
            for (j = 0; types[j].convertion_specifier != NULL; j++)
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
            count++;
        }
    }
    va_end(a);
    return (count);
}

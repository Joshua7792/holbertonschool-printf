#include <stdio.h>
#include "printf_functions.h"

/**
 * _print_char - prints character from the corresponging
 * argument from the arguments list
 * @args: list of arguments, va_list
 *
 * Return: the number of printed chars, int
 */
int _print_char(va_list ls)
{
	/* Get the character from the arguments list */
	char c = va_arg(ls, int);

	/* Write the character to stdout */
	write(1, &c, 1);

	/* Return the number of characters printed */
	return (1);
}

/**
 * _print_mod - prints modular from the corresponging
 * argument from the arguments list
 * @args: list of arguments, va_list
 *
 * Return: the number of printed chars, int
 */
int _print_mod(va_list args);
{
    /* The modulus character is always one character long */
    char c = '%';

    /* Ignore the arguments list */
    (void) args;

    /* Write the modulus character to stdout */
    write(1, &c, 1);

    /* Return the number of characters printed */
    return (1);
}

/**
 * _print_string - prints character from the corresponging
 * argument from the arguments list
 * @args: list of arguments, va_list
 *
 * Return: the number of printed chars, int
 */
int _print_string(va_list args);
{
    /* Initialize the counter */
    int i, count = 0;

    /* Get the string from the arguments list */
	char *str = va_arg(args, char *);

    /* Check if the string is NULL */
    if (str == NULL)
	{
		/* Print the string "(NULL)" */
		str = "(NULL)";
	}

    /* Iterate over the string and print each character */
    for (i = 0; str[i]; i++)
	{
		/* Write the character to stdout */
		write(1, &str[i], 1);
		count += 1;
	}

    /* Return the number of characters printed */
    return (count);
}

/**
 * _print_int - prints integer from the corresponging
 * argument from the arguments list
 * @args: list of arguments, va_list
 *
 * Return: the number of printed chars, int
 */
int _print_int(va_list args);
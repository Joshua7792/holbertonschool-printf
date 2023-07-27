#include <stdio.h>
#include "printf_functions.h"

/**
 * _print_char - prints character from the corresponding
 * argument from the arguments list
 * @args: list of arguments, va_list
 *
 * Return: the number of printed chars, int
 */
int _print_char(va_list a)
{
	/* Get the character from the arguments list */
	char c = va_arg(a, int);

	/* Write the character to stdout */
	write(1, &c, 1);

	/* Return the number of characters printed */
	return (1);
}

/**
 * _print_mod - prints modular from the corresponding
 * argument from the arguments list
 * @args: list of arguments, va_list
 *
 * Return: the number of printed chars, int
 */
int _print_mod(va_list a)
{
    /* Ignore the arguments list */
    (void) a;

    /* Write the modulus character to stdout */
    write(1, "%", 1);

    /* Return the number of characters printed */
    return (1);
}

/**
 * _print_string - prints character from the corresponding
 * argument from the arguments list
 * @args: list of arguments, va_list
 *
 * Return: the number of printed chars, int
 */
int _print_string(va_list a)
{
    int count = 0;
	char *str = va_arg(a, char *)
    if (str == NULL)
	{
        write(1, "(null)", 6);
        count = 6;
	}
    else
    {
        write(1, str, strlen(str));
        count = strlen(str);
    }
    return (count);
}

/**
 * _print_int - prints integer from the corresponding
 * argument from the arguments list
 * @args: list of arguments, va_list
 *
 * Return: the number of printed chars, int
 */
int _print_int(va_list a)
{

    int num = va_arg(a, int);
	char interger_string[] = "           ";
	int i, digit_MAX = 11, num_duplicate = num, digit_amount;

	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	for (i = 10; num != 0; i--)
	{
		char digit = num % 10;
			if (digit < 0)
			{
				digit = -1 * digit;
			}
		interger_string[i] = '0' + digit;
		num = num / 10;
	}
	if (num_duplicate < 0)
	{
		interger_string[i] = '-';
	}
	else
	{
		i++;
	}
	digit_amount = digit_MAX - i;
	write(1, &interger_string[i], digit_amount);
	return (digit_amount);



}

#include "main.h"

/**
 * get_precise - A function that calculates the precision for print
 * @format: Formatted string in which to print the arguments
 * @i: list of arguments to be printed.
 * @list: list of arguments.
 * Return: Precision.
 */

int get_precise(const char *format, int *i, va_list list)
{
	int bid_i = *i + 1;
	int precision = -1;

	if (format[bid_i] != '.')
		return (precision);

	precision = 0;

	for (bid_i += 1; format[bid_i] != '\0'; bid_i++)
	{
		if (affirm_digit(format[bid_i]))
		{
			precision *= 10;
			precision += format[bid_i] - '0';
		}
		else if (format[bid_i] == '*')
		{
			bid_i++;
			precision = va_arg(list, int);
			break;
		}
		else
			break;
	}

	*i = bid_i - 1;

	return (precision);
}

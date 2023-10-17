
#include "main.h"

/**
 * state_width - A function that calculates the width for print.
 * @format: Formatted string in which to print the arguments.
 * @i: List of arguments to be printed.
 * @list: list of arguments.
 * Return: width.
 */

int state_width(const char *format, int *i, va_list list)
{
	int curr_i;
	int breadth = 0;

	for (curr_i = *i + 1; format[curr_i] != '\0'; curr_i++)
	{
		if (affirm_digit(format[curr_i]))
		{
			breadth *= 10;
			breadth += format[curr_i] - '0';
		}
		else if (format[curr_i] == '*')
		{
			curr_i++;
			breadth = va_arg(list, int);
			break;
		}
		else
			break;
	}

	*i = curr_i - 1;

	return (breadth);
}

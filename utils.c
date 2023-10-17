#include "main.h"

/**
 * check_print - Checks if a char is printable.
 * @c: Char to be checked.
 * Return: 1 if c checks, 0 otherwise
 */
int check_print(char c)
{
	if (c >= 32 && c < 127)
		return (1);

	return (0);
}
/**
 * append_hexa - Appends ascci in hexadecimal code to buffer
 * @buffer: Array of chars.
 * @i: Index at which to start appending.
 * @ascii_code: ASSCI CODE.
 * Return: Always 3
 */

int append_hexa(char ascii_code, char buffer[], int i)
{
	char map_to[] = "0123456789ABCDEF";
	/* The hexa format code is always 2 digits long */
	if (ascii_code < 0)
		ascii_code *= -1;

	buffer[i++] = '\\';
	buffer[i++] = 'x';

	buffer[i++] = map_to[ascii_code / 16];
	buffer[i] = map_to[ascii_code % 16];

	return (3);
}
/**
 * affirm_digit - Verifies if a char is a digit
 * @c: Char to be verified
 * Return: 1 if c is verified, 0 otherwise
 */

int affirm_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}
/**
 * num_size_convert - Assigns a number to the specified size
 * @num: Number to be assigned.
 * @size: Number indicating the type to be assigned.
 * Return: Assigned value of num
 */

long int num_size_convert(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);

	return ((int)num);
}
/**
 * unsigned_size_convert - Assigns a number to the specified size.
 * @num: Number to be assigned.
 * @size: Number indicating the type to be assigned.
 * Return: Assigned value of num.
 */

long int unsigned_size_convert(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);

	return ((unsigned int)num);
}

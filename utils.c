#include "main.h"

/**
 * is_printable - Evaluate whether a char is printable
 * @c: Char to be evaluated
 *
 * Return: 1 if the c is printable, 0 when otherwise
 */

int is_printable(char c)
{
	if (c >= 32 && c < 127)
		return (1);
	else
		return (0);
}

/**
 * append_hexa_code - Append ascii hexadecimal code to buffer
 * @buffer: Array of chars.
 * @i: index at which to start appending
 * @ascii_code: ASCII CODE
 * Return: Always 3
 */

int append hexa_code(char ascii_code, char buffer[], int i)
{
	char map_to[] = "0123456789ABCDEF";
	/* The hexa format code is always 2 digits long */
	if (ascii_code < 0)
		ascii_code *= -1;

	buffer[i++] = '\\';
	buffer[i++] = 'X';

	buffer[i++] = map_to[ascii_code / 16];
	buffer[i] = map_to[ascii_code % 16];

	return (3);
}

/**
 * is_digit - This is to Veirfy if a char is a digit
 * @c: Char to be evaluated
 *
 * Return: 1 if c is a digit, 0 when otherwise
 */
int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);

		return (0);
}

/**
 * convert_size_number - This casts a number to the specified size
 * @num: This is the number to be casted
 * @size: this is the number indicating the type to be casted.
 *
 * Return: Casted value of num
 */

long int convert_size_number(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);

	return ((int)num);
}
/**
 * conver_size_unsigned - this cast a number to the specified size
 * @num: Number to be casted
 * @size: Number indicating the type to be casted
 *
 * Return: Casted value of num
 */

long int convert_size_usigned(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);
	return ((unsigned int)num);
}


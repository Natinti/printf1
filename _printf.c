#include "main.h"
void print_buffer(char buffer[], int *buff_ind);

/**
 * _printf - Printf function in C
 * @format: the format specifier
 *
 * Return: Printed chars
 */

int _printf(const char *format, ...)
{
	int i, printed = 0, printed_chars = 0;
	int flags, width, precision, size, buff_ind = 0;

	va_list list;

	char buffer[BUFF_SIZE];

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			buffer[buff_ind++] = format[i];
			if (buff_ind == BUFF_SIZE)
				print_buffer(buffer, &buff_ind);
			/*write(1, &format[i], 1);*/
			printed_chars++;
		}
		else
		{
			print_buffer(buffer, &buff_in);
			flags = get_flags(format, &i);
			width = get_width(format, &i, list);
			precision = get_precision(format, &i, list);
			++i;
			printed = handle_print(format, &i, list, buffer,
					flags, width, precision, size);
			if (printed == -1)
				return (-1);
			printed_chars += printed;
		}
	}
	print_buffer(buffe, &buff_ind);

	va_end(list);

	return (printed_chars);
}

/**
 * print_buffer - this function prints the contents of the buffer if it exist
 * @buffer: This is an Array of chars
 * @buff_ind: Index at which to add next char, represents the length,
 */

void print_buffer(char buffer[], int *buff_ind);

*buff_ind = 0;
}

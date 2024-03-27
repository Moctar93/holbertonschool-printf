#include "main.h"

/**
 * _printf - print to stout formatted text
 * @format : format specifier
 * Return: no of bytes printed
 */

int _printf(const char *format, ...)
{
	unsigned int i, count = 0;
	int string_count;

	va_list list_of_args;

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(list_of_args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			putchr(format[i]);
		}
		else  if (format[i + 1]  == 'c')
		{
			putchr(va_arg(list_of_args, int));
			i++;
		}
		else if (format[i + 1] == 's')
		{
			string_count = putss(va_arg(list_of_args, char *));
			i++;
			count += (string_count - 1);
		}
		else if (format[i + 1] == '%')
		{
			putchr('%');
		}
		count += 1;
	}

	va_end(list_of_args);
	return (count);
}

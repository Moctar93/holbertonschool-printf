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
		else if (format[i + 1] == 'i' || format[i + 1] == 'd')
		{
			print_i(list_of_args);
			i++;
		}
		else if (format[i + 1] == 'u')
                {
                        print_unsigned(list_of_args);
                        i++;
                }
		 else if (format[i + 1] == 'o')
                {
                        print_oct(list_of_args);
                        i++;
                }
		 else if (format[i + 1] == 'X')
                {
                        print_HEX(list_of_args);
                        i++;
                }
		else if (format[i + 1] == 'X')
                {
                         unsigned int num  = va_arg(list_of_args, unsigned int);
			 print_HEX_extra(num);
			 i++;
                }
		else if (format[i + 1] == 'x')
                {
                        print_hex(list_of_args);
                        i++;
		}
		 else if (format[i + 1] == 'x')
                {
			unsigned long int num = va_arg(list_of_args, unsigned long int);
			print_hex_extra(num);
                        i++;
                }
		 else if (format[i + 1] == 'p')
                {
                        print_pointer(list_of_args);
                        i++;
		}
		count += 1;
	}
	va_end(list_of_args);
	return (count);
}

#include "main.h"
/**
 * print_exc_string - print exclusuives string.
 * @val: parameter.
 * Return: integer.
 */

int print_exc_string(va_list val)
{
	char *s;
	int i, length = 0;
	int value;

	s = va_arg(val, char *);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			putchr('\\');
			putchr('x');
			length = length + 2;
			value = s[i];
			if (value < 16)
			{
				putchr('0');
				length++;
			}
			length = length + print_HEX_extra(value);
		}
		else
		{
			putchr(s[i]);
			length++;
		}
	}
	return (length);
}

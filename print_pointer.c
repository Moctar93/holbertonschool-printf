#include "main.h"

/**
 * print_pointer - prints an hexgecimal number.
 * @val: arguments.
 * Return: counter.
 */
int print_pointer(va_list val)
{
	void *p;
	char *s = "(nil)";
	long int x;
	int y;
	int i;

	p = va_arg(val, void*);
	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			putchr(s[i]);
		}
		return (i);
	}

	x = (unsigned long int)p;
	putchr('0');
	putchr('x');
	y = print_hex_extra(x);
	return (y + 2);
}

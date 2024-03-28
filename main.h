#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>


/**
 * struct format - converter for printf
 * @ph: type char pointer of the specifier
 * @function: function for the conversion specifier
 *
 */

typedef struct format
{
	char *ph;
	int (*function)();
} convert;

int print_c(va_list val);
int print_s(va_list val);
int _strlen(char *s);
int _strlen(char *s);

int print_exc_string(va_list val);
int print_bin(va_list val);
int print_rot13(va_list args);
int print_revs(va_list args);
int print_hex_extra(unsigned long int num);
int print_hex(va_list val);
int print_pointer(va_list val);
int print_HEX_extra(unsigned int num);
int print_HEX(va_list val);
int print_oct(va_list val);
int print_unsigned(va_list args);
int print_37(void);
int print_d(va_list args);
int print_i(va_list args);
int putss(char *c);
int putchr(char c);
int _printf(const char *format, ...);

#endif

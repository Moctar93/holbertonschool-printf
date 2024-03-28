#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct print_type - struct for printer functions
 * @type_arg: format organizer
 *
 * @f: function to execute print
 */

typedef struct print_type
{
	char *type_arg;
	int (*f)(va_list args);
} print_t;

int print_s(va_list val);
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

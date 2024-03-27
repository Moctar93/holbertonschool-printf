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

int print_oct(va_list val);
int print_unsigned(va_list args);
int print_37(void);
int print_d(va_list args);
int print_i(va_list args);
int putss(char *c);
int putchr(char c);
int _printf(const char *format, ...);

#endif

#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int print_d(va_list args);
int print_i(va_list args);
int putss(char *c);
int putchr(char c);
int _printf(const char *format, ...);

#endif

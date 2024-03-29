
# Project _printf

The printf function is a custom C function designed to output formatted text and variables to the standard output. It replicates the functionality of the standard C library function printf printing data types, such as characters, strings, and integers, using format specifiers.

## DESCRIPTION

The _printf function takes a format string as its first input. This string contains special placeholders where values will be inserted, known as "format specifiers" like %c, %s, %d, and %i. When _printf is called, it goes through the format string and replaces these placeholders with the corresponding values provided afterward. In simpler terms, _printf gets a string with placeholders, fills them with given values, and prints the formatted result.

## COMPILATION

Your code will be compiled this way:

$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

## REQUIREMENTS

* Used editor : VI
* All files will be compiled on Ubuntu 20.04 LTS
* Code must follow the Betty style
* Global variables are not allowed
* No more than 5 functions per file
* All prototypes for functions should be included in the header file main.h
* Authorized functions and macros:
    write (man 2 write),
    malloc (man 3 malloc),
    free (man 3 free),
    va_start (man 3 va_start),
    va_end (man 3 va_end),
    va_copy (man 3 va_copy),
    va_arg (man 3 va_arg).

## EXAMPLES

#include <stdio.h>
#include "main.h"

int main()
{
    int chars_printed;

    chars_printed = _printf("Let's try to printf a simple sentence.\n");
    printf("Number of characters printed: %d\n", chars_printed);

    chars_printed = _printf("Length:[%d, %i]\n", 39, 39);
    printf("Number of characters printed: %d\n", chars_printed);

    chars_printed = _printf("Negative:[%d]\n", -762534);
    printf("Number of characters printed: %d\n", chars_printed);

    chars_printed = _printf("Character:[%c]\n", 'H');
    printf("Number of characters printed: %d\n", chars_printed);

    chars_printed = _printf("String:[%s]\n", "I am a string !");
    printf("Number of characters printed: %d\n", chars_printed);

    chars_printed = _printf("Percent:[%%]\n");
    printf("Number of characters printed: %d\n", chars_printed);

    chars_printed = _printf("Len:[%d]\n", 12);
    printf("Number of characters printed: %d\n", chars_printed);

    chars_printed = _printf("Unknown:[%r]\n");
    printf("Number of characters printed: %d\n", chars_printed);

    return (0);
}

## MAN PAGE

You can find the man page for _printf [here](man_3_printf).

## TESTING + valgrind

root@e93bae6dc3f74cae80941d1296a5ae94-2377118072:/holbertonschool-printf# valgrind ./test
==11837== Memcheck, a memory error detector
==11837== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==11837== Using Valgrind-3.18.1 and LibVEX; rerun with -h for copyright info
==11837== Command: ./test
==11837== 
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Negative:[-762534]
Negative:[-762534]
Unsigned:[%u]
Unsigned:[2147484671]
Unsigned octal:[%o]
Unsigned octal:[20000001777]
Unsigned hexadecimal:[%x, %X]
Unsigned hexadecimal:[800003ff, 800003FF]
Character:[H]
Character:[H]
String:[I am a string !]
String:[I am a string !]
Address:[%p]
Address:[0x7ffe637541f0]
Percent:[%]
Percent:[%]
Len:[12]
Len:[12]
Unknown:[%r]
Unknown:[%r]
==11837== 
==11837== HEAP SUMMARY:
==11837==     in use at exit: 0 bytes in 0 blocks
==11837==   total heap usage: 1 allocs, 1 frees, 1,024 bytes allocated
==11837== 
==11837== All heap blocks were freed -- no leaks are possible
==11837== 
==11837== For lists of detected and suppressed errors, rerun with: -s
==11837== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

## FLOWCHART
<img width="296" alt="image" src="https://github.com/seliisyl/holbertonschool-printf/assets/158849359/e21f1142-6190-4ce9-a282-6fc538c5b1de">

## BUGS

no know bugs

## 

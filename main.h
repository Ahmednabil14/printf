#ifndef _PRINTF_
#define _PRINTF_
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <unistd.h>
/**
 * struct format - get the specifier to print
 * @type: char pointer of the specifier
 * @f: pointer to function for the conversion specifier
 */
typedef struct format
{
	char *type;
	int (*f)();
} args;
int printf_rot(va_list list);
int printf_rev(va_list list);
int printf_ex_string(va_list list);
int HEX_int(unsigned int list);
int printf_HEX(va_list list);
int printf_hex(va_list list);
int printf_octal(va_list list);
int _strlen(char *s);
int print_unsigned(va_list list);
int print_unsigned2(int x);
int printf_int(va_list list);
int printf_dec(va_list list);
int printf_bin(va_list list);
int printf_percent(void);
int printf_str(va_list list);
int _printf(const char *format, ...);
int printf_char(va_list list);
int _putchar(char c);
#endif

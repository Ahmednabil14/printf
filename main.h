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
int _strlen(char *s);
int value_range(int x);
int printf_int(va_list list);
int printf_dec(va_list list);
int printf_bin(va_list list);
int printf_percent(void);
int printf_str(va_list list);
int _printf(const char *format, ...);
int printf_char(va_list list);
int _putchar(char c);
#endif

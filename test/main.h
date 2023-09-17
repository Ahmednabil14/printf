#ifndef _PRINTF_
#define _PRINTF_
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct format - get the specifier to print
 * @type: char pointer of the specifier
 * @f: pointer to function for the conversion specifier
 */
typedef struct format
{
	char *type;
	int (*f)();
}args;
int printf_percent(va_list list);
int printf_str(va_list list);
int _printf(const char *format, ...);
int printf_char(va_list list);
int _putchar(char c);
#endif

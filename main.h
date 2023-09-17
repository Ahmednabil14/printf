#ifndef _PRINTF_
#define _PRINTF_
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
void printf_percent(va_list list);
int printf_str(va_list list);
int _printf(const char *format, ...);
void printf_char(va_list list);
int _putchar(char c);
#endif

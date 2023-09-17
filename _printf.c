#include "main.h"
/**
 * _prinf - function that print
 * @format: identifiers to look for
 * Return: number of printed char
 */
int _printf(const char * const format, ...)
{
	args arr[] = {{"%c", printf_char}, {"%s", printf_str},
		{"%%", printf_percent}};
	va_list args;

	va_start(args, format);
	if (format == NULL || format[0] == % && format[1] == '\0')
		return (-1);
	
}

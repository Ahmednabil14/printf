#include "main.h"
/**
 * _printf - function that print
 * @format: identifiers to look for
 * Return: number of printed char
 */
int _printf(const char * const format, ...)
{
	args arr[] = {{"%c", printf_char}, {"%s", printf_str},
		      {"%%", printf_percent}, {"%b", printf_bin},
		      {"%i", printf_int}, {"%d", printf_dec},
		      {"%u", print_unsigned}, {"%o", printf_octal},
		      {"%x", printf_hex}, {"%X", printf_HEX},
		      {"%S", printf_ex_string}, {"%r", printf_rev},
		      {"%R", printf_rot}};
	va_list args;
	int i = 0, j, len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
loop:
	while (format[i] != '\0')
	{
		j = 12;
		while (j >= 0)
		{
			if (arr[j].type[0] == format[i]
			    && arr[j].type[1] == format[i + 1])
			{
				len += arr[j].f(args);
				i = i + 2;
				goto loop;
			}
			j--;
		}
		_putchar(format[i]);
		i++;
		len++;
	}
	va_end(args);
	return (len);
}

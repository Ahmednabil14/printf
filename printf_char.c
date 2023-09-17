#include "main.h"
/**
 * printf_char - function that print characters
 * @list: arguments
 * Return: void
 */
int printf_char(va_list list)
{
	char s;

	s = va_arg(list, int);
	_putchar(s);
	return (1);
}

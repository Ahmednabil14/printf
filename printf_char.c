#include "main.h"
/**
 * printf_char - function that print characters
 * @list: arguments
 * Return: void
 */
void printf_char(va_list list)
{
	char s;

	s = va_arg(list, int);
	_putchar(s);
}

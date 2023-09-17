#include "main.h"
/**
 * printf_percent - function that print %
 * @list: arguments
 * Return: void
 */
void printf_percent(va_list list)
{
	int s;

	s = va_arg(list, char);
	if (s == 37)
	{
		_putchar(s);
	}
}

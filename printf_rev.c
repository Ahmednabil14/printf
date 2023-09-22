#include "main.h"
/**
 * printf_rev - function that print string reverse
 * @list: arguments
 * Return: length
 */
int printf_rev(va_list list)
{
	char *s = va_arg(list, char*);
	int i, j = 0;

	if (s == NULL)
	{
		s = "(null)";
	}
	while (s[j])
		j++;
	for (i = j - 1 ; i >= 0 ; i--)
	{
		_putchar(s[i]);
	}
	return (j);
}

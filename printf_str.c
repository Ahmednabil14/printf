#include "main.h"
/**
 * printf_str - function that print string
 * @list: arguments
 * Return: void
 */
int printf_str(va_list list)
{
	char *s;
	int len, i;

	s = va_arg(list, char *);
	if (s != NULL)
	{
		len = _strlen(s);
		for (i = 0 ; i < len ; i++)
		{
			_putchar(s[i]);
		}
		return (len);
	}
	else
	{
		s = "(null)";
		len = _strlen(s);
		for (i = 0 ; i < len ; i++)
		{
			_putchar(s[i]);
		}
		return (len);
	}
}

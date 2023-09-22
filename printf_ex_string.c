#include "main.h"
/**
 * printf_ex_string - gunction that print exclusive string
 * @list: arguments
 * Return: length
 */
int printf_ex_string(va_list list)
{
	char *s;
	int i, len = 0;
	int y;

	s = va_arg(list, char *);
	if (s == NULL)
		s = "(null)";
	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len = len + 2;
			y = s[i];
			if (y < 16)
			{
				_putchar('0');
				len++;
			}
			len = len + HEX_int(y);
		}
		else
		{
			_putchar(s[i]);
			len++;
		}
	}
	return (len);
}

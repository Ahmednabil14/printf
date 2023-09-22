#include "main.h"
/**
 * printf_rot - function that print rot13
 * @list: arguments
 * Return: length
 */
int printf_rot(va_list list)
{
	char *s = va_arg(list, char*);
	int i, j, counter, k = 0;
	char x[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char y[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (s == NULL)
	{
		s = "(null)";
	}
	for (i = 0 ; s[i] ; i++)
	{
		k = 0;
		for (j = 0 ; x[j] && !k ; j++)
		{
			if (s[i] == x[j])
			{
				_putchar(y[j]);
				counter++;
				k = 1;
			}
		}
		if (!k)
		{
			_putchar(s[i]);
			counter++;
		}
	}
	return (counter);
}

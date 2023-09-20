#include "main.h"
/**
 * printf_int - function that print intger and decimal
 * @list: list of arguments
 * Return: 1
 */
int printf_int(va_list list)
{
	int num = va_arg(list, int);
	int digit = 1;
	int n = num, x, i = 1, y;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		i++;
	}
	if (num == 0)
	{
		_putchar('0' + num);
	}
	if (num > 0)
	{
		while (num / 10)
		{
			digit = digit * 10;
			num = num / 10;
		}
		_putchar('0' + num);
		while (digit > 1)
		{
			digit = digit / 10;
			x = n / digit;
			_putchar('0' + x % 10);
			i++;
		}
	}
	return (i);
}

#include "main.h"
/**
 * print_unsigned - function that print unsigned
 * @list: arguments
 * Return: number of char that printed
 */
int print_unsigned(va_list list)
{
	int num = va_arg(list, int);
	int digit = 1;
	int n = num, x, i = 1, z;

	if (num < 0)
	{
		z = print_unsigned2(num);
		return (z);
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

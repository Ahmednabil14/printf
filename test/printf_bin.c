#include "main.h"
/**
 * printf_bin - convert from int to binary and print binary
 * @list: arguments
 * Return: the length
 */
int printf_bin(va_list list)
{
	int flag = 0;
	int i, len, a = 1, d;
	unsigned int p;
	unsigned int dec_num = va_arg(list, unsigned int);

	for (i = 0 ; i < 32 ; i++)
	{
		p = ((a << (31 - i)) & dec_num);
		if (p >> (31 - i))
		{
			flag = 1;
		}
		if (flag)
		{
			d = p >> (31 - i);
			_putchar(d + 48);
			len++;
		}
	}
	if (len == 0)
	{
		len++;
		_putchar('0');
	}
	return (len);
}

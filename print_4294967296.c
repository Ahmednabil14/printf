#include "main.h"
/**
 * print_unsigned2 - function that print 4294967296
 * @x: input number
 * Return: 11
 */
int print_unsigned2(int x)
{
	long int y = 4294967296;
	long int digit = 1, n = y, i = 1, z = 0;

	while (y / 10)
	{
		digit = digit * 10;
		y = y / 10;
	}
	_putchar('0' + y);
	while (digit > 1)
	{
		digit = digit / 10;
		z = n / digit;
		_putchar('0' + z % 10);
		i++;
	}
	return (i);
}

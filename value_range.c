#include "main.h"
/**
 * value_range - function use to get the range
 * @x: integer
 * Return: range
 */
int value_range(int x)
{
	if (x > 2147483647)
	{
		_putchar('-');
	}
	_putchar('0' + 2);
	_putchar('0' + 1);
	_putchar('0' + 4);
	_putchar('0' + 7);
	_putchar('0' + 4);
	_putchar('0' + 8);
	_putchar('0' + 3);
	_putchar('0' + 6);
	_putchar('0' + 4);
	if (x < 0)
	{
		_putchar('0' + 7);
		return (11);
	}
	else
	{
		_putchar('0' + 8);
		return (12);
	}
	return (0);
}
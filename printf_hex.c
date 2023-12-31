#include "main.h"
/**
 * printf_hex - function that print hex in lowercase
 * @list: arguments
 * Return: length
 */
int printf_hex(va_list list)
{
	unsigned int num = va_arg(list, unsigned int);
	int i, counter = 1, len;
	int *arr;
	unsigned int n = num;

	while (num / 16 != 0)
	{
		counter++;
		num = num / 16;
	}
	arr = malloc(counter * sizeof(int));
	if (arr == NULL)
	{
		return ('\0');
	}
	len = counter;
	counter--;
	while (counter >= 0)
	{
		arr[counter] = n % 16;
		n = n / 16;
		counter--;
	}
	for (i = 0 ; i < len - 1 ; i++)
	{
		if (arr[i] > 9)
			arr[i] = arr[i] + 39;
		_putchar('0' + arr[i]);
	}
	free(arr);
	return (len);
}

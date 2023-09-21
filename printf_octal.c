#include "main.h"
/**
 * printf_octal - function that print octal
 * @list: arguments
 * Return: length of octal number + 1 (NULL)
 */
int printf_octal(va_list list)
{
	unsigned int num = va_arg(list, unsigned int);
	int i, counter = 1, len;
	int *arr;
	unsigned int n = num;

	while (num / 8 != 0)
	{
		counter++;
		num = num / 8;
	}
	arr = malloc(counter * sizeof(int));
	if (arr == NULL)
	{
		return ('\0');
	}
	len = counter + 1;
	counter--;
	while (counter >= 0)
	{
		arr[counter] = n % 8;
		n = n / 8;
		counter--;
	}
        for(i = 0 ; i < len - 1 ; i++)
	{
		_putchar('0' + arr[i]);
	}
	free(arr);
	return (len);
}

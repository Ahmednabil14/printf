#include "main.h"
/**
 * HEX_int - function used in printf_ax_string
 * @list: int number
 * Return: length
 */
int HEX_int(unsigned int list)
{
	unsigned int num = list;
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
			arr[i] = arr[i] + 7;
		_putchar('0' + arr[i]);
	}
	free(arr);
	return (len);
}

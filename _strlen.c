#include "main.h"
/**
 * _strlen - function that return the length of string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int c = 0;

	while (s[c])
	{
		c++;
	}
	return (c);
}

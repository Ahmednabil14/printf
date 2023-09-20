#include "main.h"
/**
 * _strlen - function that return the length of string
 * @s: string
 * Retrun: length
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

/* Declaration of helper functions*/
#include <stdio.h>
#include "main.h"

/**
 * printchar - to print a character
 * @c: character
 * Return: the character
 */

int printchar(char c)
{
	return (_putchar(c));
}

/**
 * printstring - to print a string
 * @str: string
 */
int printstring(char *str)/*to print a string*/
{
	int i = 0;
	int count = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
		count++;
	}
	return (count);
}

/**
 * print_int - prints a string
 * @n: integer
 * Return: void
 */

int print_int(int n)
{
	char int_to_str[20];
	int i = 0;

	sprintf(int_to_str, "%d", n);

	while (int_to_str[i] != '\0')
	{
		_putchar(int_to_str[i]);
		i++;
	}
	return (0);
}

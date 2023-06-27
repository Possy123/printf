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
 * Return: count
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
	int j;

	if (n == 0)
		return (0);
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (n > 0)
	{
		int_to_str[i] = '0' + n % 10;/**
					      * convert number to string from
					       *the rightmost digit
					       */
		i++;
		n /= 10;
	}
		for (j = i - 1; j >= 0; j--)
		{
			_putchar(int_to_str[j]);/*to print in the right order*/
		}
	return (i);
}

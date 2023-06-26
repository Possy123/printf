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
void printstring(char *str)/*to print a string*/
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * print_int - prints a string
 * @n: integer
 * Return: void
 */

void print_int(int n)
{
        int digit[10];
        int count = 0;
        int i = 0;
	int j;

        if (n == 0)
        {
                _putchar('0');
                return;
        }
        if (n < 0)
        {
                _putchar('-');
                n = -n;
		count++;
        }
        while(n > 0)
        {
                digit[i] = '0' + n % 10;
               n /= 10;
	       i++;
        }
        for (j = i - 1; j >= 0; j--)
	{
		_putchar(digit[j]);
	}
	count++;
}


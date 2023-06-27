#include "main.h"

/**
 * printbinary - prints binary
 * @num: number to be converted to binary
 * Return: count
 */
int printbinary(unsigned int num)
{
	char bin_to_str[32];/*array representation  of 32bit*/
	int i = 0;/*array index*/
	int j;/*counter*/

	if (num == 0)
		return (0);
	while (num > 0)
	{
		bin_to_str[i] = '0' + num % 2;/**
						*convert num to string from
						*righmost and save in index
						*/
		i++; /*increase index*/
		num /= 2;/*divide num by 2*/
	}
	for (j = i - 1; j >= 0; j--)/*loop to print in the right order*/
	{
		_putchar(bin_to_str[j]);
	}
	return (i);/* number of bit*/
}

/**
 * printDec - conversion specifier u that prints unsigned decimal
 * @num: number
 * Return: index count
 */
int printDec(unsigned int num)
{
	char dec[32];
	int index = 0;
	int j;

	if (num == 0)
		return (0);
	while (num > 0)
	{
		dec[index] = '0' + num % 10;
		index++;
		num /= 10;
	}
	for (j = index - 1; j >= 0; j--)
	{
		_putchar(dec[j]);
	}
	return (index);
}

/**
 * print_oct - print octadecimal string to std output
 * @num: integer
 * Return: integer
 */

int print_oct(unsigned int num)
{
	char oct[32];
	int a = 0;
	int i;

	if (num == 0)
		return (0);
	while (num > 0)
	{
		oct[a] = '0' + num % 8;
		a++;
		num /= 8;
	}
	for (i = a - 1; i >= 0; i--)
	{
		_putchar(oct[i]);
	}
	return (i);
}

/**
 * print_cap_hex - print hexadecimal string
 * @num: integer
 * Return: 0;
 */

int print_cap_hex(unsigned int num)
{
	char hex[32];
	int i = 0;
	int j;

	if (num == 0)
		return (0);
	while (num > 0)
	{
		if (num % 16 < 10)
			hex[i] = '0' + num % 16;
		else
			hex[i] = 'A' + ((num % 16) - 10);
		i++;
		num /= 16;
	}
	for (j = i - 1; j >= 0; j--)
		_putchar(hex[j]);

	return (i);
}

/**
 * print_low_hex - print hexadecimal string
 * @num: integer
 * Return: integer
 */

int print_low_hex(unsigned int num)
{
	char hex[32];
	int i = 0;
	int j;

	if (num == 0)
		return (0);
	while (num > 0)
	{
		if (num % 16 < 10)
			hex[i] = '0' + num % 16;
		else
			hex[i] = 'a' + ((num % 16) - 10);
		i++;
		num /= 16;
	}
	for (j = i - 1; j >= 0; j--)
		_putchar(hex[j]);

	return (i);
}

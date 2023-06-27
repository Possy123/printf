#include "main.h"

/**
 * printbinary - prints binary
 * @num: number to be converted to binary
 * Return: count
 */
int printbinary(unsigned int num)
{
	char bin_to_str[32];
	int i = 0;
	int j;

	if (num == 0)
		return (0);
	while (num > 0)
	{
		bin_to_str[i] = '0' + num % 2;
		i++;
		num /= 2;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(bin_to_str[j]);
	}
	return (i);
}

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

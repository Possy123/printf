#include "main.h"

/**
 * print_ptr - prints pointer
 * @ptr: pointer
 * Return: Number of count
 */
int print_ptr(void *ptr)
{
	int len = 0;
	unsigned long  int num = (unsigned long int) ptr;

	_putchar ('0');
	_putchar ('x');
	len += 2;
	len += print_low_hex(num);

	return(len);
}

#include <unistd.h>
#include "main.h"

/**
 * _putchar - print a character
 * @c: the character to print
 *Return: the character
 */
int _putchar(int c)
{
	return (write(1, &c, 1));
}

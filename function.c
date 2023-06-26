/* Declaration of helper functions*/

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

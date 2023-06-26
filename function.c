/* Declaration of helper functions*/

#include "main.h"

int printchar(char c) /*to print a character*/
{
	return(_putchar(c));
}

void printstring(char *str)/*to print a string*/
{
	int i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}

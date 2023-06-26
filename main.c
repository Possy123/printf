#include "main.h"
#include <stdio.h>

/**
 * main - main function
 * Return: 0
 */

int main(void)
{
	char i = 'm';
	char *str = "Today is a good day";
	int num = 1004;

	_printf("Hello, How are you doing? This is %% sign\n");
	_printf("I said %s, to you, %c\n", str, i);
	_printf("Hello: %d, num value: %d%c, %i%d\n", _printf("Hello\n"), num, i, num, _printf("Hello\n"));

	return (0);
}

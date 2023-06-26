#include "main.h"
#include <stdio.h>

int main(void)
{
	char i = 'm';
	char *str = "Today is a good day";

	_printf("Hello, How are you doing? This is %% sign\n");
	_printf("I said %s, to you, %c\n", str, i);
	printf("'Hello': %d\n", _printf("Hello\n"));

	return (0);
}

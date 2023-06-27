#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * main - main function
 * Return: 0
 */

int main(void)
{
	char i = 'm';
	char *str = "Today is a good day";
	int num = 1004;
	 int len;
	 int len2;
	 unsigned int ui;
	 void *addr;

	_printf("Hello, How are you doing? This is %% sign\n");
	_printf("I said %s, to you, %c\n", str, i);
	_printf("Hello: %d, num value: %d%c, %i%d\n", _printf("Hello\n"), num, i, num, _printf("Hello\n"));
	printf("Hello: %d, num value: %d%c, %i%d\n", printf("Hello\n"), num, i, num, printf("Hello\n"));
	len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("%b\n", 98);
    return (0);
}

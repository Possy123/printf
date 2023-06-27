#include <stdarg.h>
#include "main.h"
/**
 * _printf - function name
 * @format: character string
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list prints;

	va_start(prints, format);
	if (*format == '\0')
		return (-1);
	while (*format != '\0')
	{
		if (*format == '%')
	{
		format++;/*move to the next character after %*/
	switch (*format)
	{
		case 'c':
		       count += printchar(va_arg(prints, int));
			break;
		case 's':
			count += printstring(va_arg(prints, char *));
			break;
		case '%':
			count += _putchar('%');
			break;
		case 'd':
		case 'i':
			count += print_int(va_arg(prints, int));
			break;
		case 'b':
			count += printbinary(va_arg(prints, unsigned int));
			break;
		case 'u':
			count += printDec(va_arg(prints, unsigned int));
			break;
		case 'o':
			count += print_oct(va_arg(prints, unsigned int));
			break;
		case 'x':
			count += print_low_hex(va_arg(prints, unsigned int));
			break;
		case 'X':
			count += print_cap_hex(va_arg(prints, unsigned int));
		default:
			break;
	}
	}
		else
		{
			count += _putchar(*format);
		}
	format++;
	}
	va_end(prints);
	return (count);
}

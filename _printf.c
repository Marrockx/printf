#include "main.h"
#include <stddef.h>

/**
 * get_op - select function for conversion char
 * @c: char to check
 * Return: pointer to function
 */

static int (*get_op(const char *c))(va_list)
{
	unsigned int i;

	flags_print fp[] = {
		{"c", print_char},
		{"s", print_str},
		{"i", print_int},
		{"d", print_decimal},
		{"b", print_binary},
		{"u", print_u},
		{"o", print_o},
		{"x", print_x},
		{"X", print_X},
		{NULL, NULL}

	};

	i = 0;

	while (fp[i].c != NULL)
	{
		if (*(fp[i].c) == *c)
		{
			break;
		}
		i++;
	}

	return (fp[i].f);
}

/**
 * _printf - Reproduce behavior of printf function
 * @format: format string
 * Return: value of printed chars
 */

int _printf(const char *format, ...)
{
	va_list ap;
	unsigned int sum = 0, i = 0;
	int (*func)(va_list);

	if (format == NULL)
		return (-1);

	va_start(ap, format);
	while (format[i])
	{
		while (format[i] != '%' && format[i])
		{
			_putchar(format[i]);
			sum++;
			i++;
		}
		if (!format[i])
			return (sum);
		func = get_op(&format[i + 1]);
		if (func != NULL)
		{
			sum += func(ap);
			i += 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);
		_putchar(format[i]);
		sum++;

		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}
	va_end(ap);
	return (sum);
}

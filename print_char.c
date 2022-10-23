#include "main.h"
#include <stdlib.h>

/**
 * print_char - prints a char
 * @ch: char to be printed
 * Return: always 1
 */

int print_char(va_list ch)
{
	char c = (char)va_arg(ch, int);

	_putchar(c);
	return (1);
}


#include <stdlib.h>
#include "main.h"

/**
 * print_str - prints a string
 * @s: string to be printed
 *
 * Return: number of chars printed
 */

int print_str(va_list s)
{
	int count = 0;
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(null)";
	while (str[count])
	{
		_putchar(str[count]);
		count++;
	}
	return (count);
}


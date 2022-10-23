#include "main.h"

int print_hex(unsigned int n, unsigned int f);

/**
 * print_x - takes an unsigned int and prints it in lowercase hexadecimal
 * @x: unsigned int to be printed print
 *
 * Return: number of digits printed
 */

int print_x(va_list x)
{
	int hex_val_lower = print_hex(va_arg(x, unsigned int), 0);

	return (hex_val_lower);
}

/**
 * print_X - takes an unsigned int and prints it in uppercase hexadecimal
 * @X: unsigned int to be printed
 *
 * Return: number of digits printed
 */

int print_X(va_list X)
{
	int hex_val_upper = print_hex(va_arg(X, unsigned int), 1);

	return (hex_val_upper);
}

/**
 * print_hex - takes an unsigned int and prints it in hexadecimal format
 * @n: unsigned int to be printed
 * @f: flag to determine case of printing (0 = lower, 1 = upper)
 * Return: number of digits printed
 */

int print_hex(unsigned int n, unsigned int f)
{
	unsigned int limit, i, sum;
	unsigned int arr[8];
	char diff;
	int ct;

	limit = 268435456; /* (16 ^ 7) */
	if (f)
		diff = 'A' - ':';
	else
		diff = 'a' - ':';
	arr[0] = n / limit;

	i = 1;
	while (i < 8)
	{
		limit /= 16;
		arr[i] = (n / limit) % 16;
		i++;
	}

	for (i = 0, sum = 0, ct = 0; i < 8; i++)
	{
		sum += arr[i];
		if (sum || i == 7)
		{
			if (arr[i] < 10)
				_putchar('0' + arr[i]);
			else
				_putchar('0' + diff + arr[i]);
			ct++;
		}
	}
	return (ct);
}

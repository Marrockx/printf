#include "main.h"

/**
 * print_binary - takes an unsigned int and prints it in binary notation
 * @bin: unsigned in to be printed
 *
 * Return: number of digits printed
 */

int print_binary(va_list bin)
{
	unsigned int num, limit, i, sum;
	unsigned int arr[32];
	int ct;

	num = va_arg(bin, unsigned int);
	limit = 2147483648; /* (2 ^ 31) */
	arr[0] = num / limit;

	i = 1;
	while (i < 32)
	{
		limit /= 2;
		arr[i] = (num / limit) % 2;
		i++;
	}

	for (i = 0, sum = 0, ct = 0; i < 32; i++)
	{
		sum += arr[i];
		if (sum || i == 31)
		{
			_putchar('0' + a[i]);
			ct++;
		}
	}
	return (ct);
}

#include "main.h"

/**
 * print_o - takes an unsigned int and prints it in octal notation
 * @o: unsigned int to be printed
 *
 * Return: number of digits printed
 */

int print_o(va_list o)
{
	unsigned int num, limit, i, sum;
	unsigned int arr[11];
	int ct;

	num = va_arg(o, unsigned int);
	limit = 1073741824; /* (8 ^ 10) */
	arr[0] = num / limit;

	i = 1;
	while (i < 11)
	{
		limit /= 8;
		arr[i] = (num / limit) % 8;
		i++;
	}

	for (i = 0, sum = 0, ct = 0; i < 11; i++)
	{
		sum += arr[i];
		if (sum || i == 10)
		{
			_putchar('0' + arr[i]);
			ct++;
		}
	}
	return (ct);
}

#include "main.h"

/**
 * print_u - takes an unsigned int and prints it in decimal notation
 * @u: unsigned int to be printed
 *
 * Return: number of digits printed
 */

int print_u(va_list u)
{
	unsigned int num, limit, i, sum;
	unsigned int arr[10];
	int ct;

	num = va_arg(u, unsigned int);
	limit = 1000000000; /* (10 ^ 9) */
	arr[0] = num / limit;

	i = 1;
	while (i < 10)
	{
		limit /= 10;
		arr[i] = (num / limit) % 10;
		i++;
	}

	for (i = 0, sum = 0, ct = 0; i < 10; i++)
	{
		sum += arr[i];
		if (sum || i == 9)
		{
			_putchar('0' + arr[i]);
			ct++;
		}
	}
	return (ct);
}

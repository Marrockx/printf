#include <unistd.h>

/**
 * _putchar - write character and print
 * @c: character to print out
 *
 * Return: success (1), on error -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

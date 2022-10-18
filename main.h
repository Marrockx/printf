#ifndef _MAIN_H
#define _MAIN_H
#include <stdarg.h>
/**
 * struct print - structure for printing various types
 * @c: type to print
 * @f: function to print
 */
typedef struct print
{
	char *c;
	int (*f)(va_list);
} flags_print;

int _putchar(char c);
int _printf(const char *format, ...);
int print_int(va_list i);
int print_decimal(va_list d);

#endif /* _MAIN_H */

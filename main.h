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
int print_char(va_list ch);
int print_str(va_list s);
int print_int(va_list i);
int print_decimal(va_list d);
int print_binary(va_list bin);
int print_x(va_list x);
int print_X(va_list X);

#endif /* _MAIN_H */

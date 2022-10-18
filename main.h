#ifndef _MAIN_H
#define _MAIN_H
#include <stdarg.h>
/**
 * struct print - structure for printing various types
 * @t: type to print
 * @f: function to print
 */
typedef struct print
{
	char *t;
	int (*f)(va_list);
} flags_print;

int _putchar(char c);
int _printf(const char *format, ...);

#endif /* _MAIN_H */

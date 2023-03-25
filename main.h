#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
/**
 * struct func - Struct for specifier to printer
 * @t: The character to compose
 * @f: function to handle printing
 */
typedef struct func
{
	char *t;
	int (*f)(va_list);
}func_t;
#endif

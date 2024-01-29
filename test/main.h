#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>


typedef struct op
{
char *op;
int (*f)(va_list);
} op_t;

int prtchar(char c);
int _printf(const char *format, ...);
int print_char(va_list c);
int print_str(va_list s);
int print_int(va_list i);
int print_dec(va_list d);

#endif /*MAIN_H*/


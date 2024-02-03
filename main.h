#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

/**
  * struct op - Struct format
  *
  * @op: The operator
  * @f: The function associated
  */


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
int print_bin(va_list b);
int print_u(va_list u);
int print_oct(va_list o);
int print_hex(va_list x);
int print_X(va_list X);
int print_S(va_list S);
int print_pointer(va_list P);
int print_hex_hlpr(unsigned long int n);
int print_HEX_hlpr(unsigned int n);
int print_rev(va_list r);

#endif /*MAIN_H*/


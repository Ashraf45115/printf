#include "main.h"
/**
 * print_char - princs character
 * @c: char input;
 * Return: 1
 */
int print_char(va_list c)
{
	unsigned char my_char;

	my_char = va_arg(c, int);
	prtchar(my_char);
	return (1);
}

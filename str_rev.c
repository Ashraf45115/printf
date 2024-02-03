#include "main.h"
/**
 * print_rev - reverse a string
 * @r: input string
 * Return: count of char printed
 */
int print_rev(va_list r)
{
	char *str = va_arg(r, char *);
	int i = 0, j;

	if (str == NULL)
		str = "(null)";

	while (str[i] != '\0')
		i++;
	for (j = i; j >= 0; j--)
		prtchar(str[j]);

	return (i);
}

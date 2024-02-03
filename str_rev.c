#include "main.h"
/**
 * print_rev - reverse a string
 * @r: input string
 * Return: count of char printed
 */
int print_rev(va_list r)
{
	char *str;
	int i = 0, j;

	str = va_arg(r, char *);
	if (str == NULL)
		return (-1);

	while (str[i] != '\0')
		i++;
	for (j = i; j >= 0; j--)
		prtchar(str[j]);

	return (i);
}

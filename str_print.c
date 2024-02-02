#include "main.h"
/**
 * print_str - prints a string
 * @s: string input
 * Return: 1
 */
int print_str(va_list s)
{
	unsigned int i;
	char *str;

	str = va_arg(s, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
		prtchar(str[i]);
	return (i);
}

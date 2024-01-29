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
	if (s == NULL)
		return (-1);
	for (i = 0; str[i] != '\0'; i++)
		prtchar(str[i]);
	return (i);
}

#include "main.h"
/**
 * print_pointer - hex number for an address
 * @p:input
 * Return: counts of prints
 */
int print_pointer(va_list p)
{
	void *ptr;
	char *str = "(nil)";
	long int j;
	int i, c ;
	
	ptr = va_arg(p, void *);
	if (ptr == NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			prtchar(str[i]);
		}
		return (i);
	}

	j = (unsigned long int)ptr;
	prtchar('0');
	prtchar('x');

	c = print_hex_hlpr(j);
	c += 2;
	return (c);
}

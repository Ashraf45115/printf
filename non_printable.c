#include "main.h"
/**
 * print_S - handle hte non printable string
 * @S: input
 * Return: count of prints
 */
int print_S(va_list S)
{
	char *str;
	unsigned int i, count = 0;
	int s;

	str = va_arg(S, char *);
	if (str == NULL)
		return (-1);
	for (i = 0; str[i] != '0'; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			prtchar('\\');
			prtchar('x');
			count += 2;
			s = str[i];
			if (s < 16)
			{
				prtchar('0');
				count++;
			}

			count += print_HEX_hlpr(s);
		}
		else
		{
			prtchar(str[i]);
			count++;
		}
	}
	return (count);
}

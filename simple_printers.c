#include "main.h"

/**
 * print_from_to - prints a range of char addresses
 * @start: starting address
 * @stop: stopping address
 * @except: except sddress
 *
 * Return: number bytes printed
*/

int print_from_to(char *start, char *stop, char *except)
{
	int sum = 0;

	while (start <= stop)
	{
		if (start != except)
			sum += _putchar(*start);
		start++;
	}
	return (sum);
}

/**
 * print_rev - print string in reverse
 * @ap: string
 * @params: the parameters struct
 *
 * Return: number bytes printd
*/
int print_rev(va_list ap, params_t *params)
{
	int i, sum = 0;
	char *str = va_arg(ap, char *);
	(void)params;

	if (str)
	{
		for (i = 0; *str; str++)
			i++;
		str--;
		for (; i > 0; i--, str--)
			sum += _putchar(*str);
	}
	return (sum);
}

/**
 * print_rot13 - print string in rot13
 * @ap: string
 * @params: the parameters struct
 *
 * Return: number bytes printd
*/

int print_rot13(va_list ap, params_t *params)
{
	int i, ind;
	int c = 0;
	char arr[] = "NOPQRSTUVWXYZABCDEFGHIJKLM	nopqrstuvwxyzabcdefghijklm";
	char *a = va_arg(ap, char *);
	(void)params;

	i = 0;
	ind = 0;
	while (a[i])
	{
		if ((a[i] >= 'A' && a[i] <= 'Z')
			|| (a[i] >= 'a' && a[i] <= 'z'))
		{
			ind = a[i] - 65;
			c += _putchar(arr[ind]);
		}
		else
			c += _putchar(a[i]);
		i++;
	}
	return (c);
}

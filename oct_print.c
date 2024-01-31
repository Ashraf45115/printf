#include "main.h"
/**
 * print_oct - converts decimal to octal
 * @o: input
 * Return: number of char printed
 */
int print_oct(va_list o)
{
	unsigned int n, num;
	int count = 0, i, *arr;

	n = va_arg(o, unsigned int);
	num = n;

	while (num / 8 != 0)
	{
		num = num / 8;
		count++;
	}
	count++;
	arr = malloc(count * sizeof(int));

	for (i = 0; i < count; i++)
	{
		arr[i] = n % 8;
		n = n / 8;
	}
	for (i = count - 1; i >= 0; i--)
	{
		prtchar(arr[i] + '0');
	}

	free(arr);
	return (count);
}

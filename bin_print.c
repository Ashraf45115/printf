#include "main.h"
/**
 * print_bin - converts number to binary
 * @b: integer input
 * Return: 1
 */
int print_bin(va_list b)
{
	unsigned int n, num;
	int *arr, i;
	int count = 0;

	n = va_arg(b, unsigned int);
	num = n;
	while (num / 2 != 0)
	{
		num = num / 2;
		count++;
	}

	count++;
	arr = malloc(count * sizeof(int));

	for (i = 0; i < count; i++)
	{
		arr[i] = n % 2;
		n = n / 2;
	}
	for (i = count - 1; i >= 0; i--)
	{
		prtchar(arr[i] + '0');
	}
	return (count);
}

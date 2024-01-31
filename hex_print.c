#include "main.h"
/**
 * print_hex - converts decimal to base 16
 * @x: input number
 * Return: count of number printed
 */
int print_hex(va_list x)
{
	unsigned int n, num;
	int count = 0, *arr, i;

	n = va_arg(x, unsigned int);
	num = n;

	while (num / 16 != 0)
	{
		num = num / 16;
		count++;
	}

	count++;
	arr = malloc(count * sizeof(int));

	for (i = 0; i < count; i++)
	{
		arr[i] = n % 16;
		n = n / 16;
	}

	for (i = count - 1; i >= 0; i--)
	{
		if (arr[i] > 9)
			arr[i] += 39;
		prtchar(arr[i] + '0');
	}
	free(arr);
	return (count);
}

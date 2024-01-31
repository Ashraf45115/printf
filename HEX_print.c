#include "main.h"
/**
 * print_X - prints hex numbers in uppercase
 * @X: input num
 * Return: count of numbers printed
 */
int print_X(va_list X)
{
	unsigned int n, num;
	int count = 0, *arr, i;

	n = va_arg(X, unsigned int);
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
			arr[i] += 7;
		prtchar(arr[i] + '0');
	}

	free(arr);
	return (count);
}

#include "main.h"
/**
 * print_hex_hlpr - prints an hexgecimal number.
 * @num: arguments.
 * Return: counter.
 */
int print_hex_hlpr(unsigned long int num)
{
	long int i;
	long int *array;
	long int counter = 0;
	unsigned long int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(long int));

	for (i = 0; i < counter; i++)
	{
		array[i] = temp % 16;
		temp /= 16;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 39;
		prtchar(array[i] + '0');
	}
	free(array);
	return (counter);
}

/**
 * print_HEX_hlpr - prints an hexgecimal number.
 * @num: number to print.
 * Return: counter.
 */
int print_HEX_hlpr(unsigned int num)
{
	int i;
	int *array;
	int counter = 0;
	unsigned int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (i = 0; i < counter; i++)
	{
		array[i] = temp % 16;
		temp /= 16;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 7;
		prtchar(array[i] + '0');
	}
	free(array);
	return (counter);
}

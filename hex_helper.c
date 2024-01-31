#include "main.h"
/**
 * print_hex - converts decimal to base 16
 * @x: input number
 * Return: count of number printed
 */
int print_hex_hlpr(unsigned long int n)
{
        unsigned long int num;
        long int count = 0, *arr, i;

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

#include "main.h"
/**
 * print_X - prints hex numbers in uppercase
 * @X: input num
 * Return: count of numbers printed
 */
int print_HEX_hlpr(unsigned int n)
{
        unsigned int num;
        long int count = 0, *arr, i;

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

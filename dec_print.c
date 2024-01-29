#include "main.h"
/**
 * print_dec - prints decimal numbers
 * @d: decimal inpud
 * Return: 1
 */
int print_dec(va_list d)
{
	int n, num, last, digit, j, exp;

	n = va_arg(d, int);
	last = n % 10;
	j = 0;
	exp = 1;
	n = n / 10;
	num = n;

	if (last < 0)	/* checks if number is negative */
	{
		prtchar('-');
		num = -num;
		last = -last;
		n = -n;
		j++;
	}
	if (num > 0) /* check if number contin multible digits */
	{
		while (num / 10 != 0)

		 /* remove last digit of num until the first */
		{
			exp = exp * 10;
			num = num / 10;
		}

		num = n;
		while (exp > 0) /* prints numbers > 9 from left to right */
		{
			digit = num / exp;
			prtchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			j++;
		}
	}
	prtchar(last + '0');
	return (j);
}

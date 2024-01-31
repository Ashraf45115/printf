#include "main.h"
/**
 * print_oct - prints integer
 * @u: integer input
 * Return: 1
 */
int print_u(va_list u)
{
	unsigned int n;
	int digit, last, j, num, exp;

	n = va_arg(u, unsigned int);
	j = 1;
	exp = 1;
	last = n % 10;
	n = n / 10;
	num = n;

	if (last < 0) /* checks if number (i) is negative */
	{
		prtchar('-');
		n = -n;
		num = -num;
		last = -last;
		j++;
	}

	if (num > 0) /* checks if integer i greater than 9 */
	{
		while (num / 10 != 0)
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

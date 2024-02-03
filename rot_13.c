#include "main.h"
/**
 * print_rot13 - encrypts a string
 * @R: str input
 * Return: count of char printed
 */
int print_rot13(va_list R)
{
	char *str = va_arg(R, char *);
	int i, j, count = 0, flag;
	char a[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char n[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; a[j] != '\0'; j++)
		{
			if (str[i] == a[j])
			{
				prtchar(n[j]);
				count++;
				flag = 1;
				break;
			}
		}
		if (flag == 0)
		{
			prtchar(str[i]);
			count++;
		}
	}
	return (count);

}

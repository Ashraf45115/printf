#include "main.h"
/**
 * prtchar - prints character from buffer
 * @c: input
 * Return: 1
 */
int prtchar(char c)
{
	return (write(1, &c, 1));
}

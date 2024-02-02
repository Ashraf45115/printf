#include "main.h"
/**
 * get_func - a function that produces output according to a format.
 * @format: format.
 * Return:  pointer to the function that corresponds
 *   to the operator given as a parameter.
 */
int (*get_func(const char *format))(va_list)
{

	unsigned int i = 0;
	op_t ops[] = {
		{"c", print_char},
		{"s", print_str},
		{"i", print_int},
		{"d", print_dec},
		{"b", print_bin},
		{"u", print_u},
		{"o", print_oct},
		{"x", print_hex},
		{"X", print_X},
		{"S", print_S},
		{"p", print_pointer},
		{NULL, NULL}
	};

	while (ops[i].op != NULL)
	{
		if (ops[i].op[0] == *format)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
/**
 * _printf -  a function that produces output
 *  according to a format.
 *  @format:  is a character string.
 *  Return: the number of characters printed (excluding
 *   the null byte used to end output to strings).
 */
int _printf(const char *format, ...)
{
	int i, count;
	va_list p;
	int (*f)(va_list);

	va_start(p, format);
	count = 0;
	if (format == NULL)
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%' && format[i])
		{
			prtchar(format[i]);
			count++;
		}
		else if ((format[i] == '%') && format[i + 1] == '\0')
			return (count);
		else if ((format[i] == '%') && !get_func(&format[i + 1]))
		{
			if (format[i + 1] == '%')
			{
				prtchar('%');
				i++;
			}
			else
				prtchar(format[i]);
			count++;
		}
		else if (format[i] == '%' && get_func(&format[i + 1]))
		{
			f = get_func(&format[i + 1]);
			if (f != NULL)
			{
				count = count + f(p);
				i++;
			}
		}
	}
	va_end(p);
	return (count);
}

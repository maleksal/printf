#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>

/**
  * _printf - prints formated string
  * @format: variable arguments
  * Return: number of outputed chars
  */

int _printf(const char *format, ...)
{
	int i;
	int count = 0;
	va_list list;

	va_start(list, format);
	/* check for null */
	if (format == NULL)
		return (-1);
	/* access string */
	for (i = 0; format[i] != '\0'; i++)
	{
		/* check for % */
		if (format[i] == '%')
		{
			/* go next elem */
			i++;
			/* if next elem is space */
			for (; format[i] == ' '; i++)
			;
			/* if next elem is \0 */
			if (format[i] == '\0')
				return (-1);

			/* increment count */
			count += execute_function_call(format[i], list);
		} else /* if not % print elem*/
		{
			  _putchar(format[i]);
			   count++;
		}
	}
	va_end(list);
	return (count);
}

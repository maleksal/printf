#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
  * is_percent - print %
  * @args: percent sign (%)
  * Return: umber of chars printed (1)
  */

int is_percent(va_list __attribute__((unused)) args)
{
	char per = '%';

	_putchar(per);

	return (1);
}

/**
 *is_a_char - print if char
 *@p:pointer to args
 *Return: int
 */
int is_a_char(va_list p)
{
unsigned char c;
c = (va_arg(p, int));
_putchar(c);
return (1);
}

/**
 *is_a_string - prints if string
 *@p:pointer to args
 *Return: int
 */

int is_a_string(va_list p)
{
	char *ptr;
	int i;

	ptr = va_arg(p, char*);
	if (ptr == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}

	for (i = 0; ptr[i] != '\0'; i++)
		_putchar(ptr[i]);

	return (i);
}

/**
 *execute_function_call - checks if the character after % is valid
 *@c:char
 *@arg: pointer
 *Return: int
 */

int execute_function_call(char c, va_list arg)
{
	int count = 0;
	int fp;

	fp = get_specifier(c, arg);

	if (fp == 0)
	{
		_putchar('%');
		_putchar(c);
		return (2);
	}
	count += fp;
	return (count);
}

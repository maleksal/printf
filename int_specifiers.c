#include "holberton.h"
#include<stdarg.h>
#include <stdio.h>

/**
  * is_int - call function that prints int
  * @arg: variable arguments (number)
  * Return: int
  */

int is_int(va_list arg)
{
	int n = va_arg(arg, int);

	return (print_int(n));
}

/**
  * is_decimal - call function that prints number
  * @arg: pointer
  *Return: int
  */

int is_decimal(va_list arg)
{
	int n = va_arg(arg, int);

	return (print_int(n));
}

/**
  * is_unsigned - handle unsigned int
  * @n: unsigned int
  * Return: int
  */

int is_unsigned(va_list n)
{
	unsigned int var;
	unsigned int length;
	int counter = 1;

	var = va_arg(n, unsigned int);
	length = var;

	/* calculate digits */
	while (length / 10)
	{
		length /= 10;
		counter++;
	}

	if (var == 0)
	{
		print_unsigned_n(var);
		return (counter);
	}
	if (var < 1)
		return (-1);

	print_unsigned_n(var);
	return (counter);
}
/**
 *base8 - converts to octal
 *@x: int
 *@dig:int
 *Return: int
 */
int base8(unsigned int x, int dig)
{
if (x / 8)
dig = base8(x / 8, dig + 1);
_putchar(x % 8 + '0');
return (dig);
}

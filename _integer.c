#include "holberton.h"
#include<stdarg.h>
#include <stdio.h>
/**
  * print_int - print digit
  * @n: integer
  * Return: number of times _putchar is called
  */
int print_int(int n)
{
	int count = 0;

	if (n / 10 != 0)
	{
		print_int(n / 10);
		if (n > 0)
		{
			_putchar((n % 10) + '0');
			count++;
		} else
		{
			_putchar((-n % 10) + '0');
			count++;
		}
	}
	else if ((n / 10 == 0) && (n % 10 != 0) && (n > 0))
	{
		_putchar((n % 10) + '0');
		count++;
	}
	else if ((n / 10 == 0) && (n % 10 != 0) && (n <= 0))
	{
		_putchar('-');
		_putchar((-n % 10) + '0');
		count += 2;
	}
	return (count);
}

/**
  * is_int - call function that prints int
  * @arg: variable arguments (number)
  * Return: int
  */

int is_int(va_list arg)
{
	int n = va_arg(arg, int);
	int count = print_int(n);

	return (count);
}

/**
  * is_decimal - call function that prints number
  * @p: pointer
  *Return: int
  */

int is_decimal(va_list arg)
{
	int n = va_arg(arg, int);
	int count = print_int(n);

	return (count);
}

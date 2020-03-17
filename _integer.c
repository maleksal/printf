#include "holberton.h"
#include<stdarg.h>
#include <stdio.h>
/**
  * print_int - print digit
  * @n: integer
  * Return: number of times _putchar is called
  */

int print_int(int number)
{
	int length;
	int division;
	unsigned int num;

	length = 0;
	division = 1;

	if (number < 0)
	{
		length += _putchar('-');
		num = number * -1;
	}
	else
		num = number;

	for (; num / division > 9; )
		division *= 10;

	for (; division != 0; )
	{
		length += _putchar('0' + num / division);
		num %= division;
		division /= 10;
	}

	return (length);
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

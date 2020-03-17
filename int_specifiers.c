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

	var = va_arg(n, unsigned int);

	if (var == 0)
		return (print_unsigned(var));
	if (var < 1)
		return (-1);

	return (print_unsigned(var));
}

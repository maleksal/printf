#include "holberton.h"
#include<stdarg.h>
#include <stdio.h>
/**
  * print_int - print digit
  * @n: integer
  * Return: number of times _putchar is called
  */
/*
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
*/
/**
  * is_int - call function that prints int
  * @arg: variable arguments (number)
  * Return: int
  */
/*
int is_int(va_list arg)
{
	int n = va_arg(arg, int);
	int count = print_int(n);

	return (count);
}
*/
int is_int(va_list args);
{
return(is_a_decimal(args));
}
/**
  * is_a_decimal - call function that prints number
  * @p: pointer
  *Return: int
  */
/*
int is_decimal(va_list arg)
{
	int n = va_arg(arg, int);
	int count = print_int(n);

	return (count);
}
*/

int is_a_decimal(va_list p)
{
  unsigned int abs, inter, counten, count;
  int x;
  count = 0;
  x = va_arg(p, int);
  if (x < 0)
    {
      abs = (n * -1);
      count += _putchar('-');
    }
  else
    abs = x;
  inter = abs;
  counten = 1;
  while (inter > 9)
    {
      aux /= 10;
      counten *= 10;
    }
  while (couten >= 1)
    {
      count += _putchar(((abs / counten) % 10) + '0');
      counten /= 10;
    }
  return(count);
}

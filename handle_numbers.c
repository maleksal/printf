#include "holberton.h"

/**
  * print_int - print digit
  * @number: integer
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

	while (division != 0)
	{
		length += _putchar('0' + num / division);
		num %= division;
		division /= 10;
	}

	return (length);
}


/**
  * print_unsigned_n - print unsigned numbers
  * @n: unsigned int
  * Return: int
  */

int print_unsigned_n(unsigned int n)
{
	int length = 0;

	if (n / 10)
		print_unsigned_n(n / 10);

	length += _putchar((n % 10) + '0');

	return (length);
}

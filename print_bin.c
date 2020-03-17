#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *base2 - converts to binary
 *@x:unsigned int; number to be printed
 *@dig: int
 *Return: 0
 */
int base2(unsigned int x, int dig)
{
if (x / 2)
dig = base2(x / 2, dig + 1);
/* prints 0 or 1 */
_putchar(x % 2 + '0');
return (dig);
}
/**
 *print_bin - prints numbers in binary
 *@p : pointer
 *Return: int
 */
int print_bin(va_list p)
{
int dig = 0;
unsigned int n = va_arg(p, unsigned int);
dig = base2(n, dig) + 1;
return (dig);
}

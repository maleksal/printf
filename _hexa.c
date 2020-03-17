#include "holberton.h"
#include <stdio.h>
/**
 *is_octal - prints the octal
 *@p:pointer
 *Return:int
 */
int is_octal(va_list p)
{
int dig = 0;
unsigned int x = va_arg(p, unsigned int);
dig = base8(x, dig) + 1;
return (dig);
}
/**
 *base16_upper - converts to hexadecimal
 *@x:int
 *@dig: int
 *Return: int
 */
int base16_upper(unsigned int x, int dig)
{
if (x / 16)
dig = base16_upper(x / 16, dig + 1);
if ((x % 16) < 10)
_putchar(x % 16 + 48);
else
_putchar(x % 16 + 55);
return (dig);
}
/**
 *is_hexa_upper - prints the hexadecimal
 *@p:pointer
 *Return: int
 */
int is_hexa_upper(va_list p)
{
int dig = 0;
unsigned int x = va_arg(p, unsigned int);
dig = base16_upper(x, dig) + 1;
return (dig);
}
/**
 *base16_down - convertes to hexa
 *@x:int
 *@dig:int
 *Return:int
 */
int base16_down(unsigned int x, int dig)
{
if (x / 16)
dig = base16_down(x / 16, dig + 1);
if ((x % 16) < 10)
_putchar(x % 16 + 48);
else
_putchar(x % 16 + 87);
return (dig);
}
/**
 *is_hexa_down - prints the hexadecimal
 *@p:pointer
 *Return:int
 */
int is_hexa_down(va_list p)
{
int dig = 0;
unsigned int x = va_arg(p, unsigned int);
dig = base16_down(x, dig) + 1;
return (dig);
}

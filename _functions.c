#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *is_a_char - print if char
 *@p:pointer to args
 *Return: int
 */
int is_a_char(va_list p)
{
_putchar(va_arg(p, int));
return (1);
}
/**
 *is_an_int - print if int or dec
 *@p:pointer to args
 *Return: int
 */

/*
int is_an_int(va_list p)
{
unsigned int j,n,x,y,z,o,v;
x = 1;
o = 1;
n = va_arg(p, int);
if (n < 0)
{
_putchar('-');
y = -n;
}
else
y = n;
z = y;
while (z > 9)
{
z = z / 10;
x++;
o = o * 10;
}
for (j = 1; j <= x;j++)
{
v = y / o;
y = t % o;
o = o / 10;
_putchar(o + '0');
}
if (n < 10)
return (x + 1);
return (x);
}
*/

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
	for (i = 0; ptr[i] != '\0'; i++)
		_putchar(ptr[i]);
	
	return (i);
}


int execute_function_call(char c, va_list arg)
{
	int count = 0;
	int (*fp)(char, va_list);

	fp = get_specifier;

	if (fp == NULL)
	{
		_putchar('%');
		_putchar('c');
		return (2);
	}
	count += fp(c, arg);
	return (count);
}

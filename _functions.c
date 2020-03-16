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
char c;
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
	int i, j = 0;

	ptr = va_arg(p, char*);
if (ptr == NULL)
{
ptr = "(null)";
for (j = 0; ptr[j] != '\0'; j++)
{
_putchar(ptr[j]);
}
return (0);
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

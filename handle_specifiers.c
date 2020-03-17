#include "holberton.h"
#include <stdio.h>

/**
  * get_specifier - takes the char and calls the func
  * @c:char
  * @p:pointer
  * Return: int
  */

int get_specifier(char c, va_list p)
{
arg arr[] = {
{"c", is_a_char},
{"s", is_a_string},
{"%", is_percent},
{"i", is_int},
{"d", is_decimal},
{"b", print_bin},
{"u", is_unsigned},
{"R", is_rot13},
{NULL, NULL}
};
int i = 0;
int x = 0;
while (arr[i].format != NULL)
{
if (arr[i].format[0] == c)
{
x += arr[i].f(p);
return (x);
}
i++;
}
return (-1);
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
	int fp;

	fp = get_specifier(c, arg);

	if (fp == -1)
	{
		_putchar('%');
		_putchar(c);
		return (2);
	}
	count += fp;
	return (count);
}

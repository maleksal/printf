#include "holberton.h"
#include <stdio.h>
/**
 *get_specifier - takes the char and calls the func
 *@c:char
 *@p:pointer
 *Return: int
 */
int get_specifier(char c,va_list p)
{
arg arr[] = {
{"c", is_a_char},
{"s", is_a_string},
/*{"d", is_an_int},
{"i", is_an_int},*/
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
return (x);
}
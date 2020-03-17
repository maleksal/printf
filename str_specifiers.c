#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
  * is_percent - print %
  * @args: percent sign (%)
  * Return: umber of chars printed (1)
  */

int is_percent(va_list __attribute__((unused)) args)
{
	char per = '%';

	_putchar(per);

	return (1);
}

/**
 *is_a_char - print if char
 *@p:pointer to args
 *Return: int
 */
int is_a_char(va_list p)
{
unsigned char c;
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
	int i;

	ptr = va_arg(p, char*);
	if (ptr == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}

	for (i = 0; ptr[i] != '\0'; i++)
		_putchar(ptr[i]);

	return (i);
}


/**
  * is_rot13 - encrypt char
  * @arg: pointer
  * Return: int
  */

int is_rot13(va_list arg)
{
	int i;
	char *c;
	char cc;

	c = va_arg(arg, char *);

	if (c == NULL)
		return (-1);

	for (i = 0; c[i] != '\0'; i++)
	{
		for ( ; (c[i] >= 'A' && c[i] <= 'Z') || (c[i] >= 'a' && c[i] <= 'z'); )
		{
			if ((c[i] >= 'n' && c[i] <= 'z') || (c[i] >= 'N' && c[i] <= 'Z'))
			{
				cc = *(c + i) - 13;
				break;
			}
			cc = *(c + i) + 13;
			break;
		}
		_putchar(cc);
	}
	return (i);
}
/**
 *in_rev - prints a string in reverse
 *@p:pointer to the string
 *Return: int
 */
int in_rev(va_list p)
{
int i, j, count;
int c;
char *string;
string = va_arg(p, char*);
if (!string)
string = "(null)";
while (string[i] != '\0')
i++;
for (j = i ; j > 0; j--)
{
c = string[j - 1];
_putchar(c);
count++;
}
return (count);
}

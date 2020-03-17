#include "holberton.h"
/**
 *buf_print - prints buffer to reduce the use of write
 *@buf:pointer
 *@n:number of bytes to print
 *Return: int
 */
int buf_print(char *buf, unsigned int n)
{
return (write(1, buf, n));
}

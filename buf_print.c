#include "holberton.h"
/**
 *bff - prints buffer to reduce the use of write
 *@buff:pointer
 *@n:number of bytes to print
 *@Return: number of bytes printed
 */
int buff(char *buff, unsigned int n)
{
return (write(1, buff, n));
}

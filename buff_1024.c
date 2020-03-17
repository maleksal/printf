#include "holberton.h"
/**
 *buff_1024 - 
 *@buff:pointer
 *@c:char
 *@i:index
 *Return: int
 */
unsigned int buff_1024(char *buff, char c, unsigned int i)
{
if (i == 1024)
{
buff(buff, i);
i = 0;
}
buff[i] = c;
i++
return (i);
}

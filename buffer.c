#include "holberton.h"
/**
 *buff - fills the buffer and resets it
 *@buffer: pointer
 *@i:index of the buffer
 *@length: size of buffer
 *Return: int
 */
int buff(char *buffer, int i, int length)
{
int j;
if (i >= 1024)
{
write(1, buffer, 1024);
for (j = 0; j < length; j++)
{
buffer[i] = 0;
}
i = 0;
}
return (i);
}

#include "main.h"

/**
 * _memcpy - prints buffer in hexa
 * @dest: the address of destinattion
 * @src: the adress of source
 * @n: number of bytes
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}

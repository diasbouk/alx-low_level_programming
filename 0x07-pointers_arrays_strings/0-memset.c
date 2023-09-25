#include "main.h"

/**
 * _memset - prints buffer in hexa
 * @s: Memory area to be pointed
 * @b: Constante byte
 * @n: Number of bytes in memory
 * Return: Nothing.
 */
char *_memset(char *s, char b, unsigned int n)
{
    unsigned int i;
    for (i = 0; i < n; i++)
    {
        s[i] = b;
    }
    return (s);
}
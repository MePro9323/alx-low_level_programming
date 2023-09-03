#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory area
 * @b: char to copy
 * @n: number of times to copy b
 * Return: Pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; 1 < n; i++)
{
s[i] = b;
}

return (s);
}

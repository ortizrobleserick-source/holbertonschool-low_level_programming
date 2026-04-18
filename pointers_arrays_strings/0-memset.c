#include <stdio.h>
/**
 *_memset - ton that fills memori with a constant byte.
 * @s: The buffer
 * @b: The character to be asigned to the buffer.
 * @n: Number of bites to fill.
 *
 * Return: Pointer to the buffer.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
	s[i] = b;
	i++;
		}
	return (s);
}

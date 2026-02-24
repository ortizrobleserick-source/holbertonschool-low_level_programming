#include <stdio.h>

/**
 * main - prints the alphabet in lowercase and then uppercase
 *
 * Return: 0
 */
int main(void)
{
	char c;

	/* Imprime minúsculas */
	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	/* Imprime mayúsculas */
	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);

	/* Salto de línea */
	putchar('\n');

	return (0);
}

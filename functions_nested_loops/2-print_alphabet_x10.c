#include "main.h"

/**
 * print_alphabet_x10 - imprime el abecedario 10 veces en minúsculas
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);
		_putchar('\n');
	}
}

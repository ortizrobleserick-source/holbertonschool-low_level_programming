#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * You can only use _putchar twice
 */
void print_alphabet(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}

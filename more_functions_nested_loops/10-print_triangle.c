#include "main.h"

/**
 * print_triangle - prints a triangle of size size
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int i, j, space;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{
		/* print spaces */
		for (space = size - i; space > 0; space--)
			_putchar(' ');

		/* print '#' */
		for (j = 0; j < i; j++)
			_putchar('#');

		_putchar('\n');
	}
}

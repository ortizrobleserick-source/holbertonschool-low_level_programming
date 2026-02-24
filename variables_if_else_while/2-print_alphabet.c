#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 *
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);  /* primera vez que usamos putchar */

	putchar('\n');  /* segunda vez que usamos putchar */

	return (0);
}

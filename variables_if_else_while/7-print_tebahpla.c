#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 *
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c); /* primera vez */

	putchar('\n'); /* segunda vez */

	return (0);
}

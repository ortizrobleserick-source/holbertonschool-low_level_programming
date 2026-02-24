#include <stdio.h>

/**
 * main - prints all numbers of base 16 in lowercase
 *
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
		putchar(c); /* primera vez */

	for (c = 'a'; c <= 'f'; c++)
		putchar(c); /* segunda vez */

	putchar('\n'); /* tercera vez */

	return (0);
}

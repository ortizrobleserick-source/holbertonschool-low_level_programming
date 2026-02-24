#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
		putchar(n); /* primera vez */

	putchar('\n'); /* segunda vez */

	return (0);
}

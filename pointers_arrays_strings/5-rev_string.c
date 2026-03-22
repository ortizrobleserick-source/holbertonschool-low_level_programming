#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int len = 0;
	int i;
	char temp;

	/* calcular longitud */
	while (s[len] != '\0')
	{
		len++;
	}

	/* invertir */
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}

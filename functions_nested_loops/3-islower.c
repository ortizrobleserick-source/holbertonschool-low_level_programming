#include "main.h"

/**
 * _islower - comprueba si un carácter es minúscula
 * @c: carácter a verificar
 *
 * Return: 1 si es minúscula, 0 en caso contrario
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

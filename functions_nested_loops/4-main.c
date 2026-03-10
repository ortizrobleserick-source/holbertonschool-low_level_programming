#include "main.h"

/**
 * main - check the _isalpha function
 *
 * Return: Always 0
 */
int main(void)
{
    int r;

    r = _isalpha('H');  /* mayúscula */
    _putchar(r + '0');
    r = _isalpha('o');  /* minúscula */
    _putchar(r + '0');
    r = _isalpha(108);  /* 'l' en ASCII */
    _putchar(r + '0');
    r = _isalpha(';');  /* no letra */
    _putchar(r + '0');
    _putchar('\n');

    return (0);
}

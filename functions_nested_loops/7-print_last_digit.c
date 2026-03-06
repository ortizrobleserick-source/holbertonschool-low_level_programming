#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to extract the last digit from
 *
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
    int last;

    last = n % 10;        /* get last digit first */
    if (last < 0)          /* make it positive if negative */
        last = -last;

    _putchar('0' + last);  /* print it */
    return (last);
}

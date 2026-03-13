#include <limits.h>
#include <stdio.h>
#include "main.h"

int main(void)
{
    int r;

    r = print_last_digit(INT_MIN);
    printf("%d\n", r);
    return (0);
}

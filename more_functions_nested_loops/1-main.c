#include <stdio.h>
#include "main.h"

int main(void)
{
    int i;

    for (i = 0; i <= 127; i++)
    {
        if (_isdigit(i))
            printf("%c: %d\n", i, _isdigit(i));
    }

    return (0);
}

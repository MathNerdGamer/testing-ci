/**
 * @file main.c
 * @brief Example program using the placeholder library.
 */

#include <stdio.h>
#include "placeholder.h"

int main()
{
    int a = 9, b = 5;

    printf("%d + %d = %d\n", a, b, add(a, b));
    printf("%d - %d = %d\n", a, b, subtract(a, b));
    printf("%d * %d = %d\n", a, b, multiply(a, b));
    printf("%d / %d = %d\n", a, b, divide(a, b));
    printf("%d %% %d = %d\n", a, b, rem(a, b));

    return 0;
}
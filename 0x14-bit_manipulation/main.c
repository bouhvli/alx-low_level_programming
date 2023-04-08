#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main() {
    // Write C code here
    unsigned long int *n = 1024;

    set_bit(&n, 10);
    printf("%ln\n", n);
    n = 0;
    set_bit(&n, 10);
    printf("%ln\n", n);
    n = 98;
    set_bit(&n, 0);
    printf("%ln\n", n);
    return (0);
    
    return 0;
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s, *s1, *s2;

    s = str_concat("Hello", NULL); 
    s1 = str_concat(NULL, "Hello"); 
    s2 = str_concat(NULL, NULL);
    if (s == NULL || s1 == NULL || s2 == NULL)
    {
        printf("failed\n");
        return (1);
    }
    printf("0 :%s\n", s);
    printf("2 :%s\n", s2);
    printf("1 :%s\n", s1);
    free(s);
    return (0);
}

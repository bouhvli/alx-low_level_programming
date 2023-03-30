#include<stdio.h>
void before_main(void) __attribute__((constructor));
/**
 * before_main - a function that prints
 * -You're beat! and yet, you must allow,\nI bore my house upon my back!\n-
 * before the main function is executed.
 */
void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

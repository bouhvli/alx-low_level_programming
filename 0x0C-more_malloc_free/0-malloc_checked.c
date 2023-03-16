#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 */
void *malloc_checked(unsigned int b)
{
	
	if (b == 0)
	{
		exit(98);
	}
	if (malloc(b) != NULL)
	{
		return (malloc(b));
	}
	else
	{
		exit(98);
	}
}

#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - prints something before main
 *
 * Return: void
 */
void first(void)
{
	printf("Hello,Holberton\n");
	
}

#include <stdio.h>
#include "main.h"

/**
* print_number - Prints a number
* @n: parameter
*/
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		putchar('-');
		i = -i;
	}
	if (i > 9)
	{
		print_number(i / 10);
	}
	putchar(i % 10 + '0');
}


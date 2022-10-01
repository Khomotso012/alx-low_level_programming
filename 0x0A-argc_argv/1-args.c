#include <stdio.h>

/**
* main - prints
* @argc: number
* @argv: argument
* Return: always 0
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

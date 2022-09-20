#include "main.h"

/**
* _strcpy - Copy paste string
* @d: destination
* @s: source
*
* Return: destination
*/
char *_strcpy(char *d, char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		*(d + i) = *(s + i);
		i++;
	}
	*(d + i) = '\0';
	return (d);
}

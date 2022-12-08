#include "lists.h"

/**
*  sum_dlistint - returns the sum
* @head: double pointer
*
* Return: list or 0
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *i;

	for (i = head; i != NULL; i = i->next)
	{
		sum += i->n;
	}
	return (sum);
}

<<<<<<< HEAD
#include "lists.h"
/**
 * print_dlistint - A function that prints elements of a list
 * @h: pointer to header of the list
 * Return: number of nodes
 */
=======
#include <lists.h>
>>>>>>> 5ccb8acc2442362db4fe289e746a88ed266ffdf6
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
<<<<<<< HEAD
	return count;
=======

>>>>>>> 5ccb8acc2442362db4fe289e746a88ed266ffdf6
}

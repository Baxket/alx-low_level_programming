#include "lists.h"
#include <stdlib.h>
/**
* add_nodeint - add node at beginning of a listint_t list.
* @head: head of double pointer
* @n: int add the list
*
* Return: NULL if it failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	if (!head)
		return (NULL);
	ptr = (listint_t *)malloc(sizeof(listint_t));
	if (!ptr)
	{
		return (NULL);
	}
	else
	{
		ptr->n = n;
		ptr->next = *head;
		*head = ptr;
	}
	return (ptr);
}

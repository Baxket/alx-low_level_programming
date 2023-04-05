#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint_end - add node at end of a listint_t list.
  *
  * @head: head of double pointer
  * @n: int add the list
  * Return: NULL if it failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *temp;

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
		ptr->next = NULL;
		if (!*head)
		{
			*head = ptr;
			return (ptr);
		}
		temp = *head;
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = ptr;
	}
	return (ptr);
}

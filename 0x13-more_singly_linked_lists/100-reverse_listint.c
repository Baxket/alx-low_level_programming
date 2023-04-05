#include "lists.h"

/**
* reverse_listint - the function that reverses a listint_t
* @head: double pointer
*
* Return: a pointer to the first node of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	if (!head || !*head)
		return (NULL);
	if (!(*head)->next)
		return (*head);
	prev = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}

#include "lists.h"
#include <stdlib.h>

/**
* insert_nodeint_at_index - inserting a new node at agiven postion
* @head: double pointer
* @idx: index of the node
* @n: new node value
*
* Return: the address of new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *temp, *new;

	if (!head)
		return (NULL);
	if (idx != 0)
	{
		temp = *head;
		for (x = 0; x < idx - 1 && temp; x++)
		{
			temp = temp->next;
		}
		if (!temp)
			return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}
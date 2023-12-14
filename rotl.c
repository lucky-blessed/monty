#include "monty.h"
/**
 * gl_rotl - Rotate the stack
 * @head: stack head
 * @count: count line
 * Return: 0
 */
void gl_rotl(stack_t **head, __attribute__((unused)) unsigned int count)
{
	stack_t *TEMP = *head, *X;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	X = (*head)->next;
	X->prev = NULL;
	while (TEMP->next != NULL)
	{
		TEMP = TEMP->next;
	}
	TEMP->next = *head;
	(*head)->next = NULL;
	(*head)->prev = TEMP;
	(*head) = X;
}

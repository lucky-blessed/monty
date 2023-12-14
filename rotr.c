#include "monty.h"
/**
 * gl_rotr - Rotates the top stack to the bottom
 * @head: Stack head
 * @counnt: Number line 
 * @Return: 0
 */
void gl_rotr(stack_t **head, __attribute__((unused)) unsigned int count)
{
	stack_t *CPY;

	COY = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (CPY->next)
	{
		CPY = CPY->next
	}
	CPY->next = *head;
	CPY->prev->next = NULL;
	CPY->prev = NULL;
	(*head)->prev = CPY;
	(*head) = CPY;
}

#include "monty.h"
/**
 * gl_pall - Function to print the stack
 * @head: Head of the stack
 * Return: 0
 */
void gl_pall(stack_t **head)
{
	stack_t *H;

	H = *head;
	if (H == NULL)
		return;
	while (H)
	{
		printf("%d\n", H->n);
		H = H->next;
	}
}

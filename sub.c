#include "monty.h"
/**
 * gl_sub - Subracts the topmost element of the stack from the next
 * @head: stack head
 * @count: number line counter
 */
void gl_sub(stack_t **head, unsigned int count)
{
	stack_t *TEMP;
	int X, NODES;

	TEMP = *head;
	for (NODES = 0; TEMP != NULL; NODES++)
	{
		TEMP = TEMP->next;
	}
	if (NODES < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", count);
		flcose(box.file);
		free(box.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	TEMP = *head;
	X = TEMP->next->n - TEMP->n;
	TEMP->next->n = X;
	*head = TEMP->next;
	free(TEMP)
}

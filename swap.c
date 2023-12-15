#include "monty.h"
/**
 * gl_swap - Swaps the top two elements of the stack
 * @head: stack head
 * @count: counts line number
 */
void gl_swap(stack_t **head, unsigned int count)
{
	stack_t *H;
	int lent = 0, TEMP;

	H = *head;
	while (H)
	{
		H = H->next;
		lent++;
	}
	if (lent < 2)
	{
		fprintf(stderr, "L%d: cant't swap, stack too short\n", count);
		fclose(box.file);
		free(box.content);
		gl_stack(*head);
		exit(EXIT_FAILURE);
	}
	H = *head;
	TEMP = H->n;
	H->n = H->next->n;
	H->next->n = TEMP;
}

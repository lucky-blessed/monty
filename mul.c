#include "monty.h"
/**
 * gl_mul - Function to multiply top two elem of stack
 * @head: stack head
 * @count: number line counter
 */
void gl_mul(stack_t **head, unsigned int count)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", count);
		fclose(box.file);
		free(box.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	H = *head;
	TEMP = H->next->n * H->n;
	H->next->n = TEMP;
	*head = H->next;
	free(H);
}

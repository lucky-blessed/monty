#include "monty.h"
/**
 * gl_mod - Computes
 * @head: stack
 * @count: Count
 */
void gl_mod(stack_t **head, unsigned int count)
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
		fprintf(stderr, "L%d: can't mod, stack too short\n", count);
		fclose(box.file);
		free(box.content);
		gl_stack(*head);
		exit(EXIT_FAILURE);
	}
	H = *head;
	if (H->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", count);
		fclose(box.file);
		free(box.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	TEMP = H->next->n % H->n;
	H->next->n = TEMP;
	*head = H->next;
	free(H)
}

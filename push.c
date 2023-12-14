#include "monty.h"
/**
 * gl_push - function to add a node to the stack
 * @head: Head of the stack
 * @count: Counts number of line
 */
void gl_push(stack_t **head, unsigned int count)
{
	int n, g = 0, lag = 0;

	if (box.arg)
	{
		if (box.arg[0] == '-')
			g++;
		for (; box.arg[g] != '\0'; g++)
		{
			if (box.arg[g] > 57 || box.arg[g] < 48)
				lag = 1;
		}
		if (lag == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", count);
			fclose(box.file);
			free(box.content);
			free_stack(*head);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", count);
		fclose(box.file);
		free(box.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	n = atoi(box.arg);
	if (box.lifi == 0)
		addnode(head, n);
	else
		addqueue(head, n);
}

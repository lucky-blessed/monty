#include "monty.h"
/**
* gl_execute - executes the opcode
* @stack: head linked list - stack
* @count: line_counter
* @file: poiner to monty file
* @content: line content
* Return: 0
*/
int gl_execute(char *content, stack_t **stack, unsigned int count, FILE *file)
{
	instruction_t opst[] = {
				{"push", gl_push}, {"pall", gl_pall}, {"pint", gl_pint},
				{"pop", gl_pop},
				{"swap", gl_swap},
				{"add", gl_add},
				{"nop", gl_nop},
				{"sub", gl_sub},
				{"div", gl_div},
				{"mul", gl_mul},
				{"mod", gl_mod},
				{"pchar", gl_pchar},
				{"pstr", gl_pstr},
				{"rotl", gl_rotl},
				{"rotr", gl_rotr},
				{"queue", gl_queue},
				{"stack", f_stack},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *op;

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	box.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{	opst[i].f(stack, count);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", count, op);
		fclose(file);
		free(content);
		gl_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}

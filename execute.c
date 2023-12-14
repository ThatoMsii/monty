#include "monty.h"
/**
* execute - executes the opcode
* @stack: newest linked list - stack
* @enumerate: line_enumerate
* @file: poiner to monty file
* @content: line content
* Return: void so returns 0
*/
int execute(char *content, stack_t **stack, unsigned int enumerate, FILE *file)
{
	instruction_t opst[] = {
				{"push", pusher}, {"pall", fun_printall}, {"pint", top_int},
				{"pop", top_pop},
				{"swap", swapper_fun},
				{"add", adder_f},
				{"nop", doesnothing_function},
				{"sub", topelementsub_fun},
				{"div", div_f},
				{"mul", toptwo_mul},
				{"mod", mod_rem},
				{"pchar", print_char},
				{"pstr", printstr},
				{"rotl", rotl_t},
				{"rotr", rotr_f},
				{"queue", queue_fr},
				{"stack", f_stack},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *op;

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{	opst[i].f(stack, enumerate);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", enumerate, op);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}

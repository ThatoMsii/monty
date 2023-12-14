#include "monty.h"
/**
 * top_int - prints the value at the top
 * @newest: top of the stack
 * @enumerate: line_number
 * Return: void so returns 0
*/
void top_int(stack_t **newest, unsigned int enumerate)
{
	if (*newest == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", enumerate);
		fclose(bus.file);
		free(bus.content);
		free_stack(*newest);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*newest)->n);
}

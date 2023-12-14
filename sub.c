#include "monty.h"
/**
  *topelementsub_fun- sustration
  *@newest: top element of the stack
  *@enumerate: line_number
  *Return: void so returns 0
 */
void topelementsub_fun(stack_t **newest, unsigned int enumerate)
{
	stack_t *aux;
	int sus, nodes;

	aux = *newest;
	for (nodes = 0; aux != NULL; nodes++)
		aux = aux->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", enumerate);
		fclose(bus.file);
		free(bus.content);
		free_stack(*newest);
		exit(EXIT_FAILURE);
	}
	aux = *newest;
	sus = aux->next->n - aux->n;
	aux->next->n = sus;
	*newest = aux->next;
	free(aux);
}

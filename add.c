#include "monty.h"
/**
 * adder_f - adds the top two elements of the stack.
 * @newest: top of the stack
 * @enumerate: line_number
 * Return: void so returns 0
*/
void adder_f(stack_t **newest, unsigned int enumerate)
{
	stack_t *h;
	int len = 0, aux;

	h = *newest;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", enumerate);
		fclose(bus.file);
		free(bus.content);
		free_stack(*newest);
		exit(EXIT_FAILURE);
	}
	h = *newest;
	aux = h->n + h->next->n;
	h->next->n = aux;
	*newest = h->next;
	free(h);
}

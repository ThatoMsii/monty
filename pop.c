#include "monty.h"
/**
 * top_pop - prints the top elements
 * @newest: top of the stack
 * @enumerate: line_number
 * Return: void returns 0
 * Authors: Kyanzi and Thato
*/
void top_pop(stack_t **newest, unsigned int enumerate)
{
	stack_t *h;

	if (*newest == NULL)
	{
		fprintf(stderr, "L%d: It is an empty stack we cant pop \n", enumerate);
		fclose(bus.file);
		free(bus.content);
		free_stack(*newest);
		exit(EXIT_FAILURE);
	}
	h = *newest;
	*newest = h->next;
	free(h);
}

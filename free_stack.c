#include "monty.h"
/**
* free_stack - frees a doubly linked list
* @newest: newest of the stack
*/
void free_stack(stack_t *newest)
{
	stack_t *aux;

	aux = newest;
	while (newest)
	{
		aux = newest->next;
		free(newest);
		newest = aux;
	}
}

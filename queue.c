#include "monty.h"
/**
 * queue_fr - prints the top
 * @newest: top of the stack
 * @enumerate: line_number
 * Return: void so returns 0
*/
void queue_fr(stack_t **newest, unsigned int enumerate)
{
	(void)newest;
	(void)enumerate;
	bus.lifi = 1;
}

/**
 * addqueue - add node to the tail stack
 * @n: new_value
 * @newest: newest of the stack
 * Return: void so returns 0
*/
void addqueue(stack_t **newest, int n)
{
	stack_t *new_node, *aux;

	aux = *newest;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*newest = new_node;
		new_node->prev = NULL;
	}
	else
	{
		aux->next = new_node;
		new_node->prev = aux;
	}
}

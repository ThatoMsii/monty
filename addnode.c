#include "monty.h"
/**
 * addnode - add node to the newest stack
 * @newest: newest of the stack
 * @n: new_value
 * Return: void so returns 0
*/
void addnode(stack_t **newest, int n)
{

	stack_t *new_node, *aux;

	aux = *newest;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (aux)
		aux->prev = new_node;
	new_node->n = n;
	new_node->next = *newest;
	new_node->prev = NULL;
	*newest = new_node;
}

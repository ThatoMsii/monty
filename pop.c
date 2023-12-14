#include "monty.h"
/**
 * top_pop - prints the top elements
 * @head: top of the stack
 * @counter: line_number
 * Return: void returns 0
*/
void top_pop(stack_t **head, unsigned int counter)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: It is an empty stack we cant pop \n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}

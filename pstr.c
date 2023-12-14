#include "monty.h"
/**
 * printstr -  at the top of the stack prints the string,
 * followed with a new line
 * @head: top of the stack
 * @counter: line_number
 * Return: void returns 0
 * authors : kyanzi Hassan and Thato
*/
void printstr(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}

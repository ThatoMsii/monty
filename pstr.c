#include "monty.h"
/**
 * printstr -  at the top of the stack prints the string,
 * followed with a new line
 * @newest: top of the stack
 * @enumerate: line_number
 * Return: void returns 0
 * authors : kyanzi Hassan and Thato
*/
void printstr(stack_t **newest, unsigned int enumerate)
{
	stack_t *h;
	(void)enumerate;

	h = *newest;
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

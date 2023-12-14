#include "monty.h"
/**
 * fun_printall - prints all the values on the stack
 * @newest: top of the stack
 * @enumerate: no used
 * Return: void so returns 0
 * Author : Kyanzi and Thato
*/
void fun_printall(stack_t **newest, unsigned int enumerate)
{
	stack_t *h;
	(void)enumerate;

	h = *newest;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}

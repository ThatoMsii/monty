#include "monty.h"
/**
 * print_char - prints the char at the top of the stack,
 * followed by a new line
 * @newest: top of the stack
 * @enumerate: line_number
 * Return: void so returns 0
*/
void print_char(stack_t **newest, unsigned int enumerate)
{
	stack_t *h;

	h = *newest;
	if (!h)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", enumerate);
		fclose(bus.file);
		free(bus.content);
		free_stack(*newest);
		exit(EXIT_FAILURE);
	}
	if (h->n > 127 || h->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", enumerate);
		fclose(bus.file);
		free(bus.content);
		free_stack(*newest);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", h->n);
}

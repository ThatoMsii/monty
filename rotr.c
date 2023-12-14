#include "monty.h"
/**
  *rotr_f- rotates the stack to the bottom
  *@newest: top of the stack
  *@enumerate: line_number
  *Return: void so returns 0
 */
void rotr_f(stack_t **newest, __attribute__((unused)) unsigned int enumerate)
{
	stack_t *copy;

	copy = *newest;
	if (*newest == NULL || (*newest)->next == NULL)
	{
		return;
	}
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *newest;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*newest)->prev = copy;
	(*newest) = copy;
}

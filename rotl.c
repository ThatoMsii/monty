#include "monty.h"
/**
  *rotl_t- rotates the stack to the top
  *@newest: top of the stack
  *@enumerate: line_number
  *Return: void so returns 0
 */
void rotl_t(stack_t **newest,  __attribute__((unused)) unsigned int enumerate)
{
	stack_t *tmp = *newest, *aux;

	if (*newest == NULL || (*newest)->next == NULL)
	{
		return;
	}
	aux = (*newest)->next;
	aux->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *newest;
	(*newest)->next = NULL;
	(*newest)->prev = tmp;
	(*newest) = aux;
}

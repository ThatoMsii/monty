#include "monty.h"
/**
 * pusher - adds element to the stack
 * @newest: top of the stack
 * @enumerate: number of the line
 * Return: fuction void so returns 0
 * Authors: Thato and Kyanzi
*/
void pusher(stack_t **newest, unsigned int enumerate)
{
	int n, j = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			j++;
		for (; bus.arg[j] != '\0'; j++)
		{
			if (bus.arg[j] > 57 || bus.arg[j] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", enumerate);
			fclose(bus.file);
			free(bus.content);
			free_stack(*newest);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", enumerate);
		fclose(bus.file);
		free(bus.content);
		free_stack(*newest);
		exit(EXIT_FAILURE); }
	n = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(newest, n);
	else
		addqueue(newest, n);
}

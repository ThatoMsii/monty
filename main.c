#include "monty.h"
bus_t bus = {NULL, NULL, NULL, 0};
/**
* main - monty code interpreter
* @argc: argument number
* @argv: monty file location
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	char *content;
	FILE *file;
	size_t size = 0;
	ssize_t scan_line = 1;
	stack_t *stack = NULL;
	unsigned int enumerate = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	bus.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (scan_line > 0)
	{
		content = NULL;
		scan_line = getline(&content, &size, file);
		bus.content = content;
		enumerate++;
		if (scan_line > 0)
		{
			execute(content, &stack, enumerate, file);
		}
		free(content);
	}
	free_stack(stack);
	fclose(file);
return (0);
}

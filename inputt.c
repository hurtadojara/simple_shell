#include "shell.h"
/**
*input - reads stdin and put chars into input
*@data: struct with data
*Return: pointer to struct
*/
shell_t *input(shell_t *data)
{
	int position = 0;
	char *input = malloc(sizeof(char) * 1024);
	char character;

	if (input == NULL)
	{
		fprintf(stderr, "hsh: error almacenamiento\n");
		free(input);
		exit(EXIT_FAILURE);
	}
	if (isatty(STDIN_FILENO))
	{
		prompt();
	}
	while (1)
	{
		character = _getchar();
		if (character == EOF)
		{
			free(input);
			free(data);
			exit(EXIT_FAILURE);
		}
		else if (character == '\n')
		{
			input[position] = '\0';
			data->getline = input;
			return (data);
		}
		else
			input[position] = character;
		position++;
	}
}

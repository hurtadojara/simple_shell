#include "shell.h"
/**
*input - reads stdin and put chars into input
*Return: pointer to struct
*/
shell_t *input(void)
{
	int position = 0, i = 0;
	char *input = malloc(sizeof(char) * 1024), character,
	 *str = malloc(sizeof(char) * 100);
	shell_t *data = malloc(sizeof(shell_t));

	data->i = i;
	data->str = str;
	if (input == NULL || str == NULL || data == NULL)
	{
		perror("hsh: error almacenamiento\n");
		free(input);
		free(str);
		free(data);
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
			free(str);
			exit(0);
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

#include "shell.h"
/**
*tokenizador - divides string into tokens
*@data: pointer to a struct
*Return: estructure
*/
shell_t *tokenizador(shell_t *data)
{
	char *clon, **tokens = malloc(sizeof(char *) * 20);
	int words = 0;

	if (tokens == NULL)
	{
		fprintf(stderr, "hsh: error almacenamiento\n");
		free(tokens);
		exit(EXIT_FAILURE);
	}
	clon = strtok(data->getline, " ");
	for (; clon != NULL; clon = strtok(NULL, " "))
	{
		tokens[words] = _strdup(clon);
		words++;
	}
	tokens[words] = clon;
	data->counter = words;
	data->token = tokens;
	return (data);
}

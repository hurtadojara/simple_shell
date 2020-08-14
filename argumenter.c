#include "shell.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

char** argumenter(char *input)
{
	char *clon, **tokens = malloc(sizeof(char *) * 1024);
	int words = 0;

	if (tokens == NULL)
	{
		fprintf(stderr, "hsh: error almacenamiento\n");
		free(tokens);
		exit(EXIT_FAILURE);
	}
	clon = strtok(input, " ");
	for (; clon != NULL; clon = strtok(NULL, " "))
	{
		tokens[words] = strdup(clon);
		words++;
	}
	return (tokens);
}

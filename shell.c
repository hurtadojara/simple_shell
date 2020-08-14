#include "shell.h"
#include <stdio.h>
#include <stdlib.h>
extern char**environ;

int main()
{
	int count;
	char *input;
	eof *datos = malloc(sizeof(eof));

	do
	{
		count = 0;
		input = read_stdin();
		datos->tokens = argumenter(input);
		datos->ubicacion = 0;
		correr(datos);
		//
		/**
		 * LIBERAR MI MEMORIA
		 */
		//free(input);
		//while (datos->tokens[count] != NULL)
		//{
		//	free(datos->tokens[count]);
		//	count++;
		//}
		//free(datos->tokens);
	} while (1);
	return (1);
}

#include "shell.h"
/**
 * comparador - gets the path
 * @data: struct with data
 * Return: teh path
 */
shell_t *comparador(shell_t *data)
{
	char *str = NULL, *copia = NULL, *copiastr = NULL;
	int words = 0;
	char **ruta = malloc(sizeof(char *) * 30);

	if (ruta == NULL)
	{
		perror("hsh: error almacenamiento\n");
		free(ruta);
		exit(EXIT_FAILURE);
	}
		str = getenv("PATH");
		copiastr = strdup(str);
		copia = strtok(copiastr, ":");
		for (; copia != NULL; copia = strtok(NULL, ":"))
		{
			ruta[words] = _strdup(copia);
			words++;
		}
		ruta[words] = copia;
		data->counterpath = words;
		data->path = ruta;
		free(copiastr);
		return (data);
}

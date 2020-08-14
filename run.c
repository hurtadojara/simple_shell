#include "shell.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <errno.h>
#include <sys/wait.h>
#include <sys/time.h>
#include <sys/resource.h>

int correr(eof *datos)
{
    pid_t proceso;
    int senal;
    char *string;

    if (datos->tokens == NULL)
    {
        perror("null input");
        return(1);
    }
    if (datos->tokens[0][0] != '/')
    {
    datos->path = comparador();
    datos->command = datos->tokens[0];
    datos = find(datos);
    }
    proceso = fork();
    if (proceso == 0)
	{
        if (execve(datos->tokens[0], datos->tokens, NULL) == -1)
		{
			perror("hsh");
			return (0);
		}
		exit(0);
	}
    else if (proceso < 0)
    {
		perror("hsh");
		return (1);
	}
    waitpid(proceso, &senal, WUNTRACED);
	return (0);
}

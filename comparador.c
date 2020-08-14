#include "shell.h"
#include <stdlib.h>
#include <stdio.h>

char **comparador(void)
{
    char *camino = "PATH=", *string, *copia;
    int token = 0, caracter = 0, coincidencias = 0, words = 0;
    char **ruta = malloc(sizeof(char *)* 30);

    while (environ[token] != NULL)
    {
        while (caracter < 5)
        {
            if (environ[token][caracter] == camino[caracter])
            {
                coincidencias++;
            }
            if (coincidencias > 4)
            {

                string = environ[token] + 5;
                copia = strtok(string, ":");
                for (; copia != NULL; copia = strtok(NULL, ":"))
	                {
		            ruta[words] = copia; //recordar que si no sirve usar strdup
		            words++;
	                }
                return (ruta);
            }
            caracter++;
        }
    coincidencias = 0;
    caracter = 0;
    token++;
    }
    return(0);
}

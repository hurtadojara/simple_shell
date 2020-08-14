#include "shell.h"
#include <stdio.h>
#include <stdlib.h>

eof *find(eof *value)
{
    int letra = 0, arg = 0, i = 0;
    char *string = malloc(sizeof(char) * 100);

                while (value->path[value->ubicacion][i] != '\0')
                {
                    i++;
                }
                while (letra < i)
                {
                    string[letra] = value->path[value->ubicacion][letra];
                    letra++;
                }
                string[letra] = '/';
                letra++;
                while (value->command[arg] != '\0')
                {     
                string[letra] = value->command[arg];
                letra++;
                arg++;
                }
                string[letra] = '\0';
                value->fullc = string;
                return (value);
    //return("la cagaste, no sirve tu funcion");
}

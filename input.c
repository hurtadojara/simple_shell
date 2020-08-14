#include "shell.h"
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <unistd.h>


char *read_stdin(void)
{
    int status = 1;
    char *input = NULL;
    size_t large = 0;

    if (isatty(STDIN_FILENO))
       printf("$ ");
    status = getline(&input, &large, stdin);
    if (input == NULL)
        free(input);
    input[status - 1] = '\0';
    if (status == -1)
    {
        free(input);
        exit(0);
    }
    return (input);
}

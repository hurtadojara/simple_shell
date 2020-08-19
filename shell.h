#ifndef SHELLH
#define SHELLH
#include <sys/wait.h>
#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <errno.h>
#include <signal.h>
/**
*struct shell - structura
*@path: array of strings
*@getline: stream
*@counter: counter
*@counterpath: counter for path liberation
*@completecommand: direction and command in a string
*@token: command and arguments
*/
typedef struct shell
{
	char *getline;
	int counter;
	int counterpath;
	char **token;
	char **path;
	char **completecommand;
} shell_t;
#define BUFFER_SIZE 1024
shell_t *input(shell_t *);
shell_t *tokenizador(shell_t *buffer);
int run(shell_t *data);
int mallocnt(shell_t *data);
int prompt(void);
int _putchar(char c);
int _getchar(void);
char *_strdup(char *src);
shell_t *comparador(shell_t *);
shell_t *find(shell_t *);
void signal_handler(int signal __attribute__((unused)));
char **complete_string(char *, char *);
int _strcmp(char *str1, char *str2);
int process(shell_t *data);
int alternfree(shell_t *data);

#endif

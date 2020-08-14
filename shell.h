#ifndef SHELL_H
#define SHELL_H
extern char**environ;

typedef struct shell
{
   char **tokens;
   char **path;
   char *command;
   int status;
   int ubicacion;
   char *fullc;
}eof;

eof *find(eof *);
char **comparador(void);
int correr(eof *);
char *read_stdin(void);
char **argumenter(char *);

#endif

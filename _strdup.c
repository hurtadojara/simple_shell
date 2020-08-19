#include "shell.h"
int _strlen(char *str);
/**
* _strdup - duplicate string
* @src: string
* Return: string
*/
char *_strdup(char *src)
{
	int i;
	int len;
	char *dest;

	len = _strlen(src);
	dest = malloc(sizeof(char) * (len + 1));

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/**
* _strlen - determines lenght
* @str: string
* Return: counter
*/
int _strlen(char *str)
{
	int i;

	if (str == NULL)
		return (0);
	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}

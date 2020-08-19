#include "shell.h"
/**
 * signal_handler - signal for shell
 * @signal: señal
 */
void signal_handler(int signal __attribute__((unused)))
{
	write(STDOUT_FILENO, "\n$ ", 3);
}

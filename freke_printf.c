#include "shell.h"

/**
 * _print - A funtion that print to the standard output
 * @str: the string to be printed
 **/

void freke_printf(const char *str)
{
	write(STDOUT_FILENO, str, strlen(str))
}

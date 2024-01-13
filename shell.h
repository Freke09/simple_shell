#ifndef SHELL_H
#define SHELL_H

/**
 * header files
 **/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>

/**
 * function prototypes
 **/

void freke_printf(const char *str);
void display_prompt(void);

#endif

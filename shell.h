#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
void displayPrompt(void);
void executeCommands(const char *command);
void readCommands(char *command, size_t size);



#endif

#ifndef SHELL_H
#define SHELL_H
/* standard hearder files*/
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

/* these are function prototypes*/

void displayPrompt(void);
void executeCommands(char *command);
void readCommands(char *command, size_t size);



#endif

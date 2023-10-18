#include "shell.h"
#include <string.h>
/**
 * executeCommands - function that executes user commands
 * @command: command entered
 * Reurn: nothing
 */
void executeCommands(const char *command)
{
	pid_t child_pid = fork();

	if (child_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (child_pid == 0)
	{
		execlp (command, command, (char *)NULL);
		perror("execlp");
		exit(EXIT_FAILURE);
	}
	else
	{
		wait(NULL);
	}
}

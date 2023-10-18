#include "shell.h"
#include <string.h>
/**
 * executeCommands - function that executes user commands
 * @command: command entered
 * Reurn: nothing
 */
void executeCommands(char *command)
{
	pid_t child_pid;

	child_pid = fork();

	if (child_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (child_pid == 0)
	{
		char *token = strtok(command, " ");
		char *args[32];
		int i = 0;

		if (token == NULL)
		{
			exit(0);
		}
		args[i++] = token;

		while ((token = strtok(NULL, " ")) != NULL)
		{
			args[i++] = token;
		}

		args[i] = NULL;

		if (execve(args[0], args, NULL) == -1)
		{
			perror("Error");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		wait(NULL);
	}
}

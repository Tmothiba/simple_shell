#include "shell.h"

/**
 * readCommands - function that handles EOF condition and removes new line
 * @command: command entered on prompt
 * @size: size of the command
 * Return: nothing
 */
void readCommands(char *command, size_t size)
{
	if (fgets(command, size, stdin) == NULL)
	{
		if (feof(stdin))
		{
			printf("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			perror("fgets");
			exit(EXIT_FAILURE);
		}
	}
	command[strcspn(command, "\n")] = '\0';
}

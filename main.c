#include "shell.h"
#include <stdbool.h>
/**
 * main - main program
 * Return: int
 */
int main(void)
{
	char command[130];
	
	while (true)
	{
		displayPrompt();
		readCommands(command, sizeof(command));
		executeCommands(command);
	}
	return (0);
}




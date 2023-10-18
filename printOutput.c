#include "shell.h"
/**
 * printOuput- function that prints message to stdout
 * @string: message to be printed
 * @stream: integer file descriptor
 * Return: nothing
 */
void printOutput(char *string, int stream)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
		write(stream, &string[i], 1);
}

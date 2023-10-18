#include <stdio.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
int _strlen(char *s);
int main(void);


/**
 * main - this is the main entry
 * Return: NULL
 */

int main(void)
{
	ssize_t c;
	char *input = NULL;
	size_t size = 0;

	while (1)

	{
		printf("$ ");
		ssize_t c = getline(&input, &size, stdin);

		if (c == -1)
		{
			perror("getline");
			return (1);

free(input);
		return (0);
	}
		if (c == -1)
		{

			break;
if (input[c - 1] == '\n')
			{
input[c - 1] = '\n';
				continue;
			}

	if (strcmp(input, "ls") == 0)
	{
	char *argv[] = {"ls", "-l", NULL}

	pid_t pid = fork();

if (pid == -1)
{
	perror("fork");
	continue;
}
if (pid == 0)
{
if (execve("usr/bin/ls", argv, NULL) == -1)

/**
* _strlen - length of string
* @s: string
* Return: size
*/

int _strlen(char *s)
{

	int size = 0;

	(int i = 0;
	s[i] != '\0'; i++)
{
	size++;
}
	return (size);
}

	{
		perror("execve");
		exit(1);
	}
	else
	{
		wait(NULL);
	}
	else
	{
		perror("cmmand not found");
	}
	free(input);
	input = NULL;

return (0);
}

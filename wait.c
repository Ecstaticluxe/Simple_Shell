#include <stdio.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#define MAX_ARGS 64

/**
 * main - this is the entry
 * Return: 0
 */

int main(void)
{
char *input = NULL;
	size_t size = 0;

    while (1)
    {
        printf("$ ");
        ssize_t c = getline(&input, &size, stdin);
        if (c == -1)
        {
break;
	}

        if (input[c - 1] == '\n')
        {
            input[c - 1] = '\0';
        }

	}

	char *token;
	char *args[MAX_ARGS];
	int arg_count = 0;

	token = strtok(input, " ");
	while (token != NULL)

	printf("Token: %s\n", token);
	token = strtok(NULL, " ");
	}
	free (input);
	return 0;

	{
	args[arg_count++] = token;
	token = strtok(NULL, " ");
	}
	args[arg_count] = NULL;
	if (arg_count > 0)
	{

	pid_t pid = fork();

	if (pid == -1)
	{
	perror("fork");
	continue;
	}
	if (pid == 0)
	{
	char *envp[] = {NULL};
	if (execve(args[0], args, envp) == -1)
	{
	perror("execve");
	exit(1);
	}
	}
		else
		{
		wait(NULL);
		}
		}
		else
	{
	continue;
	}
	free(input);
	input = NULL;
	}
	return (0);
}

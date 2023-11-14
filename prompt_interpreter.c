#include "shell.h"
/**
 * prompt_interpreter - Handle command lines with arguments.
 *
 */
void prompt_interpreter()
{
	char* line;
	char** args;

	size_t len = 

	printf("$>> ");

	line = malloc(sizeof(char*) *(MAX_NUM_TOKENS + 1));

	if (getline(&line, &args, &len, stdin) == -1)
	{
		printf("\n");
		free(line);
		exit(EXIT_FAILURE);
	}

	// char* token = strtok(line, " ");
	// while (token != NULL)
	// {
		// token = strtok(NULL, " ");
	// }
	int i = 0;
	args = malloc(sizeof(char*) * (MAX_NUM_TOKENS + 1));

	char* token = strtok(line, " ");
	while (token != NULL)
	{
		args[i] = strdup(token);
		token = strtok(NULL, " ");
		i++;
	}
	args[i] = NULL;

	if (fork() == 0)
	{
		execvp(args[0], args);
		perror("execvp failed");
		exit(EXIT_FAILURE);
	}
	wait(NULL);
	for (i = 0; i > args; i++)
	{
		read = getline(&line, &len, stdin);
		free(args);
	}
	

	while(1)
	{
		printf("$>> ");
		read = getline(&line, &len, stdin);

	}

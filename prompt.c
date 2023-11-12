#include "shell.h"
/**
 *  prompt_interpreter - Display a prompt-
 *  and wait for the user to type a command.
 */
void prompt_interpreter()
{
	char cmd[MAX_CMD_LEN];

	while (1)
	{
		printf("$>> ");

		if (fgets(cmd, sizeof(cmd), stdin) == NULL)
		{
			printf("\n");
			break;
		}

		cmd[strcspn(cmd, "\n")] = '\0';

		pid_t pid = fork();

		if (pid == -1)
		{
			perror("fork");
			exit(EXIT_FAILURE);
		}
		else if  (pid == 0)
		{
			execlp(cmd, (char *)NULL);
			perror("execlp");
			exit(EXIT_FAILURE);
		}
		else
		{
			wait(NULL);
		}
	}
	return;
}
int main()
{
	prompt_interpreter();
	return (0);
}

#include "shell.h"
/**
 * prompt_interpreter - function.
 */
void prompt_interpreter()
{
        pid_t pid;
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

                pid = fork();

                if (pid == -1)
                {
                        perror("fork");
                        exit(EXIT_FAILURE);
                }
                else if  (pid == 0)
                {
                        execlp(cmd, cmd, (char *)NULL);
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

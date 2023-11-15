#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

#define MAX_CMD_LEN 100
#define MAX_NUM_TOKENS 200
#define MAX_INPUT 1024


void prompt_interpreter();
void env_builtin();
void execute_command(char *cmd);
void exit_builtin();
void handle_arguments(int argc, char *argv[]);
char *get_path();
char *find_command_in_path(const char *command);

#endif /* SHELL_H */

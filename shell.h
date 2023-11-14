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

int findMissingNumber(int nums[], int n);
void prompt_interpreter(); 
#endif /* SHELL_H */

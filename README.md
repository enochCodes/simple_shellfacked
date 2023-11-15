# Simple Shell Project

## Overview
This is a simple UNIX command line interpreter, developed as part of the Simple Shell project.

## Table of Contents
- [Authors](#authors)
- [Description](#description)
- [Requirements](#requirements)
- [Compilation](#compilation)
- [Usage](#usage)
- [Testing](#testing)
- [Tasks](#tasks)
- [License](#license)

## Authors
- Henok
- Batelham

## Description
This project involves the creation of a basic shell that follows specific requirements. The shell should be able to interpret and execute simple UNIX commands.

## Requirements
- The shell must be compiled on Ubuntu 20.04 LTS using gcc with specific options.
- All code should follow the Betty style.
- Memory leaks should be avoided.
- No more than 5 functions per file.
- Include guards for header files are required.
- System calls should be used only when necessary.
- A detailed README and AUTHORS file should be provided.

## Compilation
To compile the shell, use the following command:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh


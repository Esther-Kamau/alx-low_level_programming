# 0x09. C - Static libraries

## Description
This project is about C static libraries in C programming language.

## Concepts
In this project, I learned about the following concepts:
* C static libraries

## Resources
Read or watch:
* [What Is A “C” Library? What Is It Good For?](https://www.kaust.edu.sa/en/study/faculty/julien-barbier)
* [Creating A Static “C” Library Using “ar” and “ranlib”](https://www.geeksforgeeks.org/static-vs-dynamic-libraries/)
* [Using A “C” Library In A Program](https://www.ibm.com/docs/en/zos/2.1.0?topic=resources-using-c-library-program)
* [What is difference between Dynamic and Static library(Static and Dynamic linking) (stop at 4:44)](https://www.youtube.com/watch?v=eW5he5uFBNM)

Man or help:
* ar
* ranlib
* nm

## Learning Objectives
At the end of this project, I am expected to be able to explain to anyone, without the help of Google:
* What is a static library, how does it work, how to create one, and how to use it
* Basic usage of `ar`, `ranlib`, `nm`

## Requirements
### C
* Allowed editors: `vi`, `vim`, `emacs`
* All my files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
* All my files should end with a new line
* A `README.md` file, at the root of the folder of the project is mandatory
* My code should use the `Betty` style. It will be checked using `betty-style.pl` and `betty-doc.pl`
* I am not allowed to use global variables
* No more than 5 functions per file
* I am not allowed to use the standard library. Any use of functions like `printf`, `puts`, etc… is forbidden
* I am allowed to use `_putchar`
* I don’t have to push `_putchar.c`, I will use my file. If I do it won’t be taken into account
* In the following examples, the `main.c` files are shown as examples. I can use them to test my functions, but I don’t have to push them to my repo (if I do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
* The prototypes of all my functions and the prototype of the function `_putchar` should be included in my header file called `main.h`
* Don’t forget to push my header file

### Bash
* Allowed editors: `vi`, `vim`, `emacs`
* All my scripts will be tested on Ubuntu 20.04 LTS
* All my files should end with a new line (why?)
* The first line of all my files should be exactly `#!/bin/bash`
* A `README.md` file, at the root of the folder of the project, describing what each script is doing
* All my files must be executable

## Tasks
### 0. A library is not a luxury but one of the necessities of life
Create the static library `libmy.a` containing all the functions listed below:

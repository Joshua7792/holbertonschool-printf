![_printf banner](https://media.giphy.com/media/oVvhEYvWDvE1G/giphy.gif)

## Table of Content
_printf.c: This is the main code, of our custom function, it's a replica of the printf function.

function.c: Contains all the functions that are call in our _printf.c file.

main.h: It's the header file, contains the prototype to our functions.

man_3_printf: This file contains the man page for the function _printf.

## Description

The function _printf main focus is to print an output according to a certain format. Different ways to print an output is with the use of a format specifier.

### What is format specifier?

A format specifier in c are used to take input and print the output of a type. The symbol we use in every format specifier is %. The specifier tells the compiler about the type of data that most be given or input and the type of data that most be printed on the screen.

| Format Specifier | Used for...                                                   |
|------------------|---------------------------------------------------------------|
| %%               | Write a function that returns the sum of all its parameters.  |
| %i, %d           | Write a function that prints numbers, followed by a new line. |
| %s               | Write a function that prints strings, followed by a new line. |
| %c               | Write a function that prints anything.                        |

### Usage Example
```
Example for char:           Example for string:                Example for digit:             Example for interger:
Input: _printf("%c", H);    Input: _printf("%s", "hello");     Input: _printf("%d", 13);      Input: _printf("%i", 45);
Output: H                   Output: hello                      Output: 13                     Output: 45
```
### Return Value
Upon successful return, these functions return the number of character printed (excluding the null byte used to end output to string). If an output error is encountered, a negative value is returned.

## Technology

The language we use for the creation of _printf() is the C language. This low level language allow us to create and control function from scratch and define its output. We are currently in our foundation trimester of C language and we are testing our knowledge by building the _print() from scratch.

### Compilation
All the files that were used are compiled using:
`gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c`

## Challenges
The challenges we faced are the following:

* Finding the edge cases. This was done by purposely breaking the function and finding a solution.
* The creation of the function to print intergers.
* Trying to create a function with the little information that was given to us. 

Solving these challenges helped us to develop critical thinking and emphasize collaboration

## Developer
### Joshua Santiago
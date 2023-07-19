0x0F. C - Function pointers
Write a function that prints a name.

Prototype: void print_name(char *name, void (*f)(char *));

1. If you spend too much time thinking about a thing, you'll never get it done
mandatory
Write a function that executes a function given as a parameter on each element of an array.

2. To hell with circumstances; I create opportunities
mandatory
Write a function that searches for an integer.

Prototype: int int_index(int *array, int size, int (*cmp)(int));

3. A goal is not always meant to be reached, it often serves simply as something to aim at
mandatory
Write a program that performs simple operations.

You are allowed to use the standard library
[200~3-calc.h

This file should contain all the function prototypes and data structures used by the program. You can use this structure:

3-op_functions.c

This file should contain the 5 following functions (not more

3-get_op_func.c

This file should contain the function that selects the correct function to perform the operation asked by the user. You’re not allowed to declare any other function.


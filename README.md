## Singly Linked Lists Tasks

This repository contains a set of C programs that implement various operations on singly linked lists. Each program demonstrates a different functionality related to linked lists. Below is a summary of each program and its purpose:

### Task 0: Print List
- File: `0-print_list.c`
- Description: This program defines a function `print_list` that prints all the elements of a singly linked list. If a node's string element is `NULL`, it prints `(nil)` instead.
- Prototype: `size_t print_list(const list_t *h);`
- Return: The number of nodes in the list.

### Task 1: List Length
- File: `1-list_len.c`
- Description: This program defines a function `list_len` that calculates and returns the number of elements in a singly linked list.
- Prototype: `size_t list_len(const list_t *h);`

### Task 2: Add Node
- File: `2-add_node.c`
- Description: This program defines a function `add_node` that adds a new node at the beginning of a singly linked list. The new node's string value is duplicated using `strdup`.
- Prototype: `list_t *add_node(list_t **head, const char *str);`
- Return: The address of the new element, or `NULL` if allocation fails.

### Task 3: Add Node at the End
- File: `3-add_node_end.c`
- Description: This program defines a function `add_node_end` that adds a new node at the end of a singly linked list. The new node's string value is duplicated using `strdup`.
- Prototype: `list_t *add_node_end(list_t **head, const char *str);`
- Return: The address of the new element, or `NULL` if allocation fails.

### Task 4: Free List
- File: `4-free_list.c`
- Description: This program defines a function `free_list` that frees all the nodes of a singly linked list.
- Prototype: `void free_list(list_t *head);`

### Task 5: The Hare and the Tortoise
- File: `100-first.c`
- Description: This program prints the message "You're beat! and yet, you must allow,\nI bore my house upon my back!" before the `main` function is executed.

### Task 6: Assembly Hello Holberton
- File: `101-hello_holberton.asm`
- Description: This is a 64-bit assembly program that uses the `printf` function to print "Hello, Holberton" followed by a new line.

Each task's corresponding C and assembly files can be found in the respective directories within the `0x12-singly_linked_lists` directory of the GitHub repository `alx-low_level_programming`.

For each C program, there is also a corresponding `main` program that demonstrates the functionality of the implemented functions. These `main` programs can be compiled and executed to observe the behavior of the functions. The compilation commands for each program are provided in the comments of the `README` for each task.


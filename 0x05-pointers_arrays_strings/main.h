#ifndef MAIN_
#define MAIN_H_

#include <stdlib.h>

/* Function to print a single character */
int _putchar(int);

/* Function to reset an integer variable to 98 */
void reset_to_98(int *n);

/* Function to swap the values of two integers */
void swap_int(int *a, int *b);

/* Function to calculate the length of a string */
size_t _strlen(const char *s);

/* Function to print a string */
void _puts(char *str);

/* Function to print a string in reverse */
void print_rev(char *s);

/* Function to reverse a string */
void rev_string(char *s);

/* Function to print every other character of a string */
void puts2(char *str);

/* Function to print the second half of a string */
void puts_half(char *str);

/* Function to print the elements of an array */
void print_array(int *a, int n);

/* Function to copy a string from source to destination */
char *_strcpy(char *dest, char *src);

/* Function to convert a string to an integer */
int _atoi(char *s);

#endif /* MAIN_ */


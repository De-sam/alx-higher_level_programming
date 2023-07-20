#ifndef MAIN_H_
#define MAIN_H_

/* Custom putchar function to print a character */
int _putchar(int);

/* Checks if a character is uppercase */
int _isupper(int);

/* Checks if a character is a digit */
int _isdigit(int);

/* Multiplies two integers and returns the result */
int mul(int a, int b);

/* Prints numbers from 0 to 9 */
void print_numbers(void);

/* Prints numbers from 0 to 9 except 2 and 4 */
void print_most_numbers(void);

/* Prints the numbers from 0 to 14 ten times */
void more_numbers(void);

/* Prints a horizontal line using the character '_' */
void print_line(int n);

/* Prints a diagonal line using the character '\' */
void print_diagonal(int n);

/* Prints a square of a given size using the character '#' */
void print_square(int size);

/* Prints a right-angled triangle of a given size using the character '#' */
void print_triangle(int size);

/* Prints an integer number */
void print_number(int n);

#endif /* MAIN_H_ */


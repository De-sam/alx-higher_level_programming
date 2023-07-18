#include "main.h"

/**
 * main - Check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _islower('H');
    _putchar(r + '0');  /* Output: 0 (not lowercase) */

    r = _islower('o');
    _putchar(r + '0');  /* Output: 1 (lowercase) */

    r = _islower(108);
    _putchar(r + '0');  /* Output: 1 (lowercase) */

    _putchar('\n');
    return 0;
}

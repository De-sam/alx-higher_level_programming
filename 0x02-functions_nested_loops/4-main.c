#include "main.h"

int main(void)
{
    int r;

    r = _isalpha('H');
    _putchar(r + '0');  /* Output: 1 (letter) */

    r = _isalpha('o');
    _putchar(r + '0');  /* Output: 1 (letter) */

    r = _isalpha(108);
    _putchar(r + '0');  /* Output: 1 (letter) */

    r = _isalpha(';');
    _putchar(r + '0');  /* Output: 0 (not a letter) */

    _putchar('\n');
    return 0;
}

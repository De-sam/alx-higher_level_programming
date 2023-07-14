#include <stdio.h>

/**
 *main - receives no argument
 *
 *Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);

		/*if it is not the last number, add , and a space */

		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

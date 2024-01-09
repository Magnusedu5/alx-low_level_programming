#include <stdio.h>

/**
 * main- Entry point
 * @void: Null value
 *
 * Description: Print numbers from 10 to 99 separated by comma and space
 * Return: Zero value
 */

int main(void)
{
	int n, j;

	for (n = 0; n <= 8; n++)
		for (j = n + 1; j <= 9; ++j)
	{
		putchar('0' + n);
		putchar('0' + j);

		if (n < 8 || j < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

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
	int n, j, k;

	for (n = 0; n <= 7; n++)
	{
		for (j = n + 1; j <= 8; ++j)
		{
		for (k = j + 1; k <= 9; ++k)
	{
		putchar('0' + n);
		putchar('0' + j);
		putchar('0' + k);

		if (n < 7 || j < 8 || k < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
		}
	}
	putchar('\n');
	return (0);
}

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
	int n;

	for (n = 10; n <= 99; n++)
	{
		putchar(n + '0');
		if (n < 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	int numbers;

	for (numbers = 0 ; numbers <= 9; ++numbers)
	{
		putchar('0' + numbers);
	}

	putchar('\n');

	return (0);
}

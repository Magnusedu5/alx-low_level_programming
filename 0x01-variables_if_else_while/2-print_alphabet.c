#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	char alphabeth;

	for (alphabeth = 'a'; alphabeth <= 'z'; ++alphabeth)
	{
		putchar(alphabeth);
	}

	putchar('\n');

	return (0);
}

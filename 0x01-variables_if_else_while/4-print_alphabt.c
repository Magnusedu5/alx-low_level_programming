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
		if (alphabeth != 'q' && alphabeth != 'e')
		{
			putchar(alphabeth);
		}
	}

	putchar('\n');

	return (0);
}

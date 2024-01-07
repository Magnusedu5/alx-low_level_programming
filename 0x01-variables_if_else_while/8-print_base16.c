#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0.
 */

int main(void)
{
	int num;
	char Hex;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
	}

	for (Hex = 'a'; Hex <= 'f'; Hex++)
	{
		putchar(Hex);
	}

	putchar('\n');

	return (0);
}

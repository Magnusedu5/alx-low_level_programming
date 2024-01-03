#include <stdio.h>
/**
 * main - Prints size of a data type
 * Return: 0
 */
int main(void)
{
	printf("size of long int: %zu byte(s)\n", sizeof(long int));
	printf("size of int: %zu byte(s)\n", sizeof(int));
	printf("size of char: %zu byte(s)\n", sizeof(char));
	printf("size of long long int: %zu byte(s)\n", sizeof(long long int));
	printf("size of float: %zu byte(s)\n", sizeof(float));

	return (0);
}

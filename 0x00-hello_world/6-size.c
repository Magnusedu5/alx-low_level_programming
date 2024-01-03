#include <stdio.h>
/**
 * main - Prints size of a data type
 * Return: 0
 */
int main(void)
{
	printf("size of long: %zu byte(s)\n", sizeof(long));
	printf("size of int: %zu byte(s)\n", sizeof(int));
	printf("size of char: %zu byte(s)\n", sizeof(char));
	printf("size of long long: %zu byte(s)\n", sizeof(long long));
	printf("size of float: %zu byte(s)\n", sizeof(float));
	printf("size of double: %zu byte(s)\n", sizeof(double));
	printf("size of long double: %zu byte(s)\n", sizeof(long double));

	return (0);
}

#include <stdio.h>
/**
 * main - Prints the size of various typesa based on
 * the computr it is compiled and run on..
 * Return: always 0.
 */

int main(void)

{
	printf("size of a char: %zu byte(s)\n", sizeof(char));

	printf("size of a int: %zu byte(s)\n", sizeof(int));
	printf("size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("size of a float: %zu byte(s)\n", sizeof(float));
	return (0);
}

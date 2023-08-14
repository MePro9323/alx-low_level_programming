#include <stdio.h>
/**
*main - A programm that print the size of various types
*Return: 0 (Success)
*/
int main(void)
{
printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(char));
printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(int));
printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(long int));
printf("size of long long int: %lu byte(s)\n", sizeof(long long int));
printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(float));
return (0);
}

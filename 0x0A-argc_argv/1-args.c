#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the number of arguments passes on it
 * @argc: argument count
 * @argv: argument array
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d \n", argc - 1);
	return (0);
}

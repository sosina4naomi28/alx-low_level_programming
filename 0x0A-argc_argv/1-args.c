#include <stdio.h>
#include "main.h"
/**
 * main -  prints the number of arguments passed into it.
 * @argc: number of argument
 * @argv: array of argument
 * Return: always 0 (success)
 */
int main(int argc, char const *argv[])
{
	(void)argv;
	printf("%i\n", argc - 1);

	return (0);
}

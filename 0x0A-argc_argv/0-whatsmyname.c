#include <stdio.h>
#include "main.h"

/**
 * main - prints its name, followed by a new line.
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char const *argv[])
{
	printf("%s\n", *argv);

	return (0);
}

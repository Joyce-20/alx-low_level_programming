#include <stdio.h>

/**
 * main - print the number of arguments passed into it
 * @argc:command line argument count
 * @argv:command line arguement array
 * Return:0
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);

	return (sizeof(argv[0]) - sizeof(argv[0]));
}

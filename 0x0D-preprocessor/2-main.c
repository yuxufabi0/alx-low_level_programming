#include <stdio.h>

/**
 * main - Prints the name of the file it's being compiled from
 *
 * Return - Always 0
 */

int main(void)
{
	printf("%s\n", __BASE_FILE__);

	return (0);
}

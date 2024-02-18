#include <stdio.h>
#include <stdlib.h>

/**
  * main - A program that prints the minimum number of coins
  * to make change for an amount of money.
  * @argc: an int for arg count
  * @argv: a char pointer to an array of pointers
  *
  * Return: Always 0
  */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("0\n");
	}
	else
	{
		int num;
		int count;

		num = atoi(argv[1]);
		count = 0;
		while (num)
		{
			if (num >= 25)
				num -= 25;
			else if (num >= 10)
				num -= 10;
			else if (num >= 5)
				num -= 5;
			else if (num >= 2)
				num -= 2;
			else if (num >= 1)
				num -= 1;
			count++;
		}
		printf("%d\n", count);
	}

	return (0);
}

#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Description: Computes and prints the first 98 Fibonacci numbers, starting
 * with 1 and 2. Each number is printed on a new line, followed by a comma and
 * space (except for the last number). Uses unsigned long long int to handle
 * large numbers. Returns 0.
 *
 * Return: 0 on success
 */
int main(void)
{
	unsigned long long int bef = 1, aft = 2, new, bef1, aft1, bef2, aft2;
	int i;

	printf("%llu, %llu", bef, aft);

	for (i = 3; i <= 98; i++)
	{
		new = bef + aft;
		bef = aft;
		aft = new;
		printf(", %llu", new);
	}

	bef1 = bef / 1000000000;
	aft1 = aft / 1000000000;
	bef2 = bef % 1000000000;
	aft2 = aft % 1000000000;

	for (i = 99; i <= 100; i++)
	{
		aft = aft1 + bef1;
		bef = aft2 + bef2;
		aft1 = bef / 1000000000;
		bef2 = bef % 1000000000;
		printf(", %llu%09llu", aft, bef);
	}

	printf("\n");
	return (0);
}


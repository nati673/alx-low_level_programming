#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int bef = 1, aft = 2, new, bef1, aft1, bef2, aft2;
	int i;

	printf("%lu, %lu", bef, aft);
	for (i = 3; i <= 98; ++i)
	{
		new = bef + aft;
		bef = aft;
		aft = new;
		printf(", %lu", new);
	}
	bef1 = bef / 1000000000;
	aft1 = aft / 1000000000;
	bef2 = bef % 1000000000;
	aft2 = aft % 1000000000;
	for (i = 1; i <= 88; ++i)
	{
		new = bef2 + aft2;
		bef2 = aft2;
		aft2 = new;
		if (i != 88)
		{
			new = bef1 + aft1 + (new / 1000000000);
			bef1 = aft1;
			aft1 = new;
			printf(", %lu%09lu", new, aft2);
		}
		else
			printf(", %lu%lu", bef1 + aft1, new);
	}
	printf("\n");
	return (0);
}

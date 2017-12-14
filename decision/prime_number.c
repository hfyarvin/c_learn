#include <stdio.h>
#include <math.h>

int is_prime_number(int a);
int main()
{
	int i,j;
	printf("Find all prime numbers less than 100\n");
	for (int i = 2; i < 100; ++i)
	{
		j = is_prime_number(i);
		if (j == 1)
		{
			printf("%d \t", i);
		}
	}
	printf("\nAll prime numbers were found!\n");
}

int is_prime_number(int a)
{
	for (int i = 2; i <= sqrt(a); ++i)
	{
		if (a%i==0)
		{
			return 0;
		}
	}
	return 1;
}
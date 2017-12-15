#include <stdio.h>

int main()
{
	int n[10];
	for (int i = 0; i < 10; ++i)
	{
		n[i] = i + 100;
	}

	for (int i = 0; i < 10; ++i)
	{
		printf("n[%d]: %d, ", i, n[i]);
		printf("the address of n[%d]: %p,", i, &n[i]);
		printf("n[%d]: %d.\n", i, *&n[i]);
	}

	return 0;
}
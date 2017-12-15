#include <stdio.h>

int main()
{
	int a = 10;
	int *ip = NULL;
	printf("Address stored in ip : %p\n", ip);
	ip = &a;

	printf("Address of a : %p\n", &a);
	printf("Address stored in ip : %p\n", ip);

	printf("Value of *ip: %d\n", *ip);

	return 0;
}
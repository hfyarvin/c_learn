#include <stdio.h>

extern int count;
void write_extern(void)
{
	int* ptr;
	ptr = &count;
	printf("count is %d\n", count);
	// printf("the address of count is: %s\n", ptr);
	printf("the value of ptr: %d\n", *ptr);
}
#include <stdio.h>
#define LENGTH 10 // constant
#define NEWLINE '\n'

int add(int a,int b); // declare

int main()
{
	const int WIDTH = 5;
	printf("%d\n",WIDTH );
	int i = 1, j = 3;
	j += i;
	printf("%d\n", j);
	int ret = add(i, j);
	printf("%d", ret);
	printf("%c", NEWLINE);
	return 0;
}

int add(int a, int b) 
{
	int c = a + b;
	return a + b + LENGTH;
}
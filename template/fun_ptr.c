#include <stdio.h>

int max(int x, int y)
{
	return x > y ? x : y;
}

int main()
{
	int (*p)(int, int) = &max; //"&" can be ignored
	int a, b, c, d;
	printf("Input three numbers:");
	scanf("%d %d %d", &a, &b, &c);
	d = p(p(a, b), c);

	printf("The max num: %d\n", d);
	return 0;
}
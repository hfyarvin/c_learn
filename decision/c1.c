#include <stdio.h>

int main() {
	int num;
	printf("input one int:");
	scanf("%d", &num);

	(num%2==0)?printf("even"):printf("odd");
	printf("\n");
	return 0;
}
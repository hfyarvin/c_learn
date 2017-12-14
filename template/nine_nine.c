#include <stdio.h>

int main()
{
	int i, j, result;
	for (int i = 0; i < 10; ++i)
	{
		for (int j = 0; j < 10; j++)
		{
			result = i*j;
			printf("%d*%d=%-3d", i, j, result );
		}
		printf("\n");
	}
	system("pause")
}
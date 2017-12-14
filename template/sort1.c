#include <stdio.h>

int main()
{
	int num, thousand, decade, hundred;
	for (int i = 1; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			for (int k = 0; k < 5; ++k)
			{
				if (i != j && i != k && j != k)
				{
					printf("%d, \t", i * 100 + j * 10 + k);
				}
			}
		}
	}
	return 0;
} 
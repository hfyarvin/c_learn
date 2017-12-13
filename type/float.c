#include <stdio.h>
#include <float.h>

int main()
{
	// printf("size: %d\n",sizeof(float) );
	printf("min: %E\n", FLT_MIN);
	printf("max: %E\n", FLT_MAX);
	printf("Precision value: %d\n", FLT_DIG);

	return 0;
}
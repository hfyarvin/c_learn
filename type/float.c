#include <stdio.h>
#include <float.h>

int main()
{
	printf("int size: %lu\n",sizeof(int) );
	printf("float size: %lu\n", sizeof(float));
	printf("double size: %lu\n", sizeof(double));
	printf("char size: %lu\n", sizeof(char));
	printf("min: %E\n", FLT_MIN);
	printf("max: %E\n", FLT_MAX);
	printf("Precision value: %d\n", FLT_DIG);

	return 0;
}
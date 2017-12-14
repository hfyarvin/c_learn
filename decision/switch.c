#include <stdio.h>

int main()
{
	char grade = 'C';

	switch(grade)
	{
		case 'B':
			printf("Great\n");
			break;
		default :
			printf("default\n");
	}

	return 0;
}
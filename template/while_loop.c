#include <stdio.h>
void odd_and_even_sum(int max);
int main(){
	odd_and_even_sum(100);
}

//odd sum and even sum less than 100;
void odd_and_even_sum(int a)
{
	int odd_sum, even_sum, num = 1;
	odd_sum = 0;
	even_sum = 0;
	while(num < a){
		if (num%2 == 0)
		{
			even_sum += num;
		} else {
			odd_sum += num;
		}
		num++;
	}
	printf("odd_sum: %d\n", odd_sum);
	printf("even_sum: %d\n", even_sum);	
}
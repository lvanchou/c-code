#include<stdio.h>

int main(void)
{
	int num;
	int bai;
	int shi;
	int gew;

	printf("Input an integer: ");

	scanf("%d", &num);
	
	bai = num / 100;

	shi = num / 10 % 10;

	gew = num % 10;

	printf("\nThe result is %d%d%d", gew, shi, bai); 

	return 0;
}
#include<stdio.h>

int main(void)
{
	float F, C;

	C = 5 * (F - 32) / 9;
	printf("input the degree:");
	scanf("%f", &F);
	printf("F(%.2f)=C(%.2f)", F, C);
	printf("\n");

	return 0;
}
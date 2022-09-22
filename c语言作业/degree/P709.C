#include<stdio.h>

int main(void)
{
	float deg, cel;

	printf("Input the degree: ");
	scanf("%f", &deg);
	cel = 5 * (deg - 32) / 9;

	printf("\nF(%.2f) = C(%.2f)", deg, cel);

	return 0;
}
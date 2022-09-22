#include<stdio.h>

int main(void)
{
	int num, qian, bai, shi, ge;

	printf("Input a number with 4-digit: ");
	scanf("%d", &num);
	qian = num / 1000;
	bai = num / 100 % 10;
	shi = num / 10 % 10;
	ge = num % 10;
	printf("\nsum=%d\n", qian + bai + shi + ge);
	return 0;
}
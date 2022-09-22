
#include<stdio.h>

int main(void)
{
	int a1, b1, c1;

	printf("\nplease input a date: ");
	scanf("%d-%d-%d", &a1, &b1, &c1);
	if (b1 >= 10 && c1 >= 10)
	{
		printf("\nthe date is:%d/%d/%d", a1, b1, c1);
	}
	else if (b1 >= 10 && c1 < 10)
	{
		printf("\nthe date is:%d/%d/0%d", a1, b1, c1);
	}
	else if (b1 < 10 && c1 < 10)
	{
		printf("\nthe date is:%d/0%d/0%d", a1, b1, c1);
	}
	else if (b1 < 10 && c1 >= 10)
	{
		printf("\nthe date is:%d/0%d/%d", a1, b1, c1);
	}
	return 0;
}
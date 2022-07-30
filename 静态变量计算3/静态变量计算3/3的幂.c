#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void calculate();
int main()
{
	for (int x=1; x <= 6; x++){
		calculate();
	}
	return 0;
}
void calculate()
{
	static int result = 3;
	result = result * 3;
	printf("%d\n", result);
	return 0;
}
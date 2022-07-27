#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define height 10
int calculate(int length,int width);

int main()
{
	int length;
	int width;
	int result;

	printf("输入长：\n");
	scanf("%d", &length);

	printf("输入宽：\n");
	scanf("%d", &width);
	
	result = calculate(length, width);
	printf("体积为：");
	printf("%d\n", result);
	return 0;
}

int calculate(int length, int width)
{
	int result = height*length*width;
	return result;
}
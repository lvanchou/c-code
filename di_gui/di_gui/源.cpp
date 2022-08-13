//输入一个数顺序打出每一位数

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void print(int);
int main()
{
	int x;
	scanf("%d", &x);
	print(x);
	return 0;
}

void print(int num){
	if (num > 9)
	{
		print(num / 10);
	}
	printf("%d  ", num % 10);
}
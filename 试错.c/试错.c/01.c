#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int park();

int main()
{
	for (int x = 1; x <= 5; x++)
	{
		printf("ʣ�೵λ%d\n", park());
	}
	return 0;
}
int park()
{
	static int num = 1250;
	num=num-1;
	return num;
}
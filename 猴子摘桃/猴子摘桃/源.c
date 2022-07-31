#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int total;
	int x;
	x = 1;
	total = 1;
	do
	{
		total = (total + 1) * 2;
		x++;
	} while (x<=9);
	printf("第一天摘了%d个\n",total);
	return 0;
}
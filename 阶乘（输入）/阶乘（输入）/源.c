#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int putin;
	int x;
	int result;
	x = 1;
	result = 1;
	scanf("%d", &putin);
	for (x; x <= putin; x++)
	{
		result = result*x;
	}
	printf("%dµÄ½×³ËÎª%d", putin, result);
	return 0;

}
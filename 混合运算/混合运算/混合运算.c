#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	float fFloat = 1.68;
	char cChar1 = 's';
	char cChar2 = 'd';
	int iInt1 = 8;
	int iInt2 = 9;
	double result;
	result = fFloat + cChar1 + iInt1 - iInt2*iInt2 + iInt1 + cChar2;
	printf("%.2f", result);
	return 0;
}
#include<stdio.h>

int main(void)
{
	int a1;
	int a2;
	int a3;
	int a4;
	int a5;
	int a6;
	int a7;
	int a8;
	int a9;
	int a10;
	char b1;
	char b2;
	char b3;
	char b4;
	char b5;
	char b6;
	char b7;
	char b8;
	char b9;
	char b10;

	printf("\n请输入10个字符：");

	scanf("%c%c%c%c%c%c%c%c%c%c", &b1, &b2, &b3, &b4, &b5, &b6, &b7, &b8, &b9, &b10);
	a1 = (int) b1;
	a2 = (int) b2;
	a3 = (int) b3;
	a4 = (int) b4;
	a5 = (int) b5;
	a6 = (int) b6;
	a7 = (int) b7;
	a8 = (int) b8;
	a9 = (int) b9;
	a10 = (int) b10;

	printf("\n加密结果为：");

	printf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d", a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);

	return 0;
}
#include<stdio.h>

int main(void)
{
	int a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11;

	printf("\n请输入11个数字：");
	scanf("%d %d %d %d %d %d %d %d %d %d %d", &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11);
	printf("\n解密结果为：%c%c%c%c%c%c%c%c%c%c%c", a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
	return 0;
}
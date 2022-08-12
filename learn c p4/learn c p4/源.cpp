#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//宏的定义
#define MAX(x,y) (x>y?x:y)

int main(){
	int a = 10;
	int b = 20;
	int max = MAX(a, b);
	printf("max:%d\n", max);
	//指针
	int*p = &a;
	*p = 20;
	printf("%d\n", a);
	return 0;
}
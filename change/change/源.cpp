#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
void Change(int* x, int* y){
	int temp = *x;
	*x = *y;
	*y = temp;
	//换值不换地址，用地址去找到main中的值而不是change中的
}

int main(){
	int a = 10;
	int b = 20;
	Change(&a, &b);
	printf("a:%d,b:%d\n", a, b);
	return 0;
}


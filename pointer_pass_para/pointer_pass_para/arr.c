//一个储存整形数据的数组 a。
//一个 int 型数据 n 表示需要你遍历的数据个数。
//要求：
//
//是用 for 循环遍历数组 a 中下表为 0~n - 1 的这 n 个元素，并输出每一个数据。
//要求输出每一个数据后面输出一个逗号, 。
//所有数据输出到一行中，并且在所有数据输出结束后，输出一个换行。

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int arrorder1(int* a, int n){
	for (int x = 0; x < n; x++){
		printf("%d,", *(a+x));
	}
	printf("\n");
}


int arrorder2(int* a, int n){
	int (*arr)[] = a;
	for (int x = 0; x < n; x++){
		printf("%d,", (*arr)[x]);
	}
	printf("\n");
}
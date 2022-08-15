#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"factorial.h"

int main(){
	int num=0;
	scanf("%d", &num);
	printf("%d\n",factorial(num));
}
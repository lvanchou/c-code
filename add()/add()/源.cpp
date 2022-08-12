#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void add(int *num){
	(*num)++;
}

int main(){
	int num = 0;
	printf("%d\n", num);
	add(&num);
	printf("%d\n", num);
	add(&num);
	printf("%d\n", num);
	add(&num);
	printf("%d\n", num);
	add(&num);
	printf("%d\n", num);
}
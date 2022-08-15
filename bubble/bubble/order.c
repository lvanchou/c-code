#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int order(int arr[],int sz){
	for (int i = 0; i <= sz - 1; i++){
		if (i==0)
		{
			printf("[%d,",arr[i]);
		}
		else if (i == sz - 1){
			printf("%d]\n",arr[i]);
		}
		else{
			printf("%d,", arr[i]);
		}
	}
}
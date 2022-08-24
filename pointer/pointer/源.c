#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main(){
	int arr[5];
	int *pa;
	for (pa = &arr[0]; pa < &arr[5];)
	{
		//*pa = 0;
		//pa++;
		*pa++ = 0;
	}
	for (int x = 0; x < 5; x++){
		printf("%d ", arr[x]);
	}
}
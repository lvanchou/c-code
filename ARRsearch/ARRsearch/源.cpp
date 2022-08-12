#define _CRT_SECURE_NO_WARNINGS 1
//有序数组二分法找索引

#include<stdio.h>

int search(int arr[], int x, int length){
	int left;
	int right;
	left = 0;
	right = length - 1;
	while (1){
		int mid = (left + right) / 2;
		if (arr[mid] < x){
			left = mid + 1;
		}
		else if (arr[mid]>x){
			right = mid - 1;
		}
		else if(arr[mid]==x){
			printf("%d", mid);
			return mid;
		}
		else{
			return -1;
		}
	}
}

int main(){
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int x;
	scanf("%d", &x);
	int length = sizeof(arr) / sizeof(arr[0]);
	if (search(arr, x, length) != -1){
		printf("找不到");
	}
	else
	{
		printf("%d\n", search(arr, x, length));
	}
		
}
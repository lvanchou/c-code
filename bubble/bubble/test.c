#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"bubble.h"
#include"order.h"

int main()
{
	int arr[] = { 5, 4, 9, 7, 1, 2, 0, 6, 3, 8 };    
	bubble(arr,sizeof(arr)/sizeof(arr[0]));
	order(arr,sizeof(arr)/sizeof(arr[0]));
}
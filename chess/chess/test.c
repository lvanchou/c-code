#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"
#include<stdlib.h>
#include<time.h>


int main()
{
	srand((unsigned int)time(NULL));
	while (1)
	{
		printf("***************************************************\n");
		printf("****************** 1.开始  0.退出 ******************\n");
		printf("***************************************************\n");
		int choice = 0;
		scanf("%d", &choice);
		if (choice == 0)
		{
			printf("退出");
			break;
		}
		else if (choice == 1)
		{
			printf("\n\n\n\n");
			game();
		}
		else
		{
			printf("非法字符，请重新输入！");
		}
	}
	return 0;
}
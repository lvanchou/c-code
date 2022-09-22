#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"contact.h"

int main(){
	enum input
	{
		ad=1,
		de,
		se,
		ch,
		sh,
	};
	 int input;
	struct person con;
	init(&con);
	do{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input) 
		{
		case 6:
			printf("退出成功！\n");
			break;
		case ad:
			add(&con);
			break;
		case de:
			del(&con);
			break;
		case se:
			search(&con);
			break;
		case ch:
			change(&con);
			break;
		case sh:
			show(&con);
			break;
		default:
			printf("输入错误，请重新输入！\n\n\n");
		}
	} while (input != 6);
	return 0;
}
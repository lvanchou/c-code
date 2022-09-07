#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"con.h"

int main(){
	struct person con;
	init(&con);
	enum input
	{
		ad=1,
		de=2,
		se=3,
		ch=4,
		sh=5,
	};
	int input;
	do{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input) 
		{
		case 6:
			printf("退出成功！");
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
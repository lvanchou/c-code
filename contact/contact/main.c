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
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input) 
		{
		case 6:
			printf("�˳��ɹ���\n");
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
			printf("����������������룡\n\n\n");
		}
	} while (input != 6);
	return 0;
}
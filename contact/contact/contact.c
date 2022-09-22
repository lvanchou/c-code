#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"

void init(struct person*ps){
	memset(ps->data, 0, sizeof(ps->data));
	ps->space = 0;
}

void menu(){
	printf("*********************************************************************\n");
	printf("*********************************************************************\n");
	printf("*********************      �绰��      ******************************\n");
	printf("********   1.����   ********************   2.ɾ��   ******************\n");
	printf("********   3.��ѯ   ********************   4.�޸�   *****************\n");
	printf("********   5.չʾ   ********************   6.�˳�   *****************\n");
	printf("*********************************************************************\n");
	printf("*********************************************************************\n");
}

void add(struct person*ps){
	if (ps->space < SIZEMAX){
		printf("��������ϵ��������");
		scanf("%s", ps->data[ps->space].name);
		printf("��������ϵ���Ա�");
		scanf("%s", ps->data[ps->space].sex);
		printf("��������ϵ�����䣺");
		scanf("%d", &(ps->data[ps->space].age));
		printf("��������ϵ�˵绰���룺");
		scanf("%s", ps->data[ps->space].tel);
		printf("��������ϵ��סַ��");
		scanf("%s", ps->data[ps->space].addr);
		ps->space++;
		printf("¼��ɹ���\n\n\n\n\n");
	}
	else{
		printf("ͨѶ¼������");
	}
}

void show(struct person*ps){
	int x;
	for (x = 0; x < ps->space;x++){
		printf("%d.������%s\n",x+1,ps->data[x].name);
		printf("�绰���룺%s\n\n",ps->data[x].tel);
	}
}

void del(struct person*ps){
	char name[30];
	int x;;
	printf("������Ҫɾ������ϵ�����֣�");
	scanf("%s",&name);
	for (x = 0; x < ps->space;x++)
	{
		int com;
		com = strcmp(ps->data[x].name, name);
			if (com==0)
			{
				int y;
				for (y = x; y < ps->space; y++)
				{
					ps->data[y] = ps->data[y + 1];
					ps->space--;
					printf("ɾ���ɹ���\n\n");
					break;
				}
			}else if (x==ps->space-1)
			{
				printf("���޴��ˣ�\n\n\n");
				break;
			}
	}
}

void search(struct person*ps){
	char name[30];
	int x;
	printf("������Ҫ��������ϵ�����֣�");
	scanf("%s", &name);
	for (x = 0; x < ps->space; x++)
	{
		int com;
		com = strcmp(ps->data[x].name, name);
		if (com == 0)
		{
				printf("%s ��\n%s\t%d\t%s\t%s\n\n",
					ps->data[x].name,
					ps->data[x].sex,
					ps->data[x].age,
					ps->data[x].tel,
					ps->data[x].addr);
				break;
		}
		else if (x == ps->space - 1)
		{
			printf("���޴��ˣ�\n\n\n");
			break;
		}
	}
}

void change(struct person*ps){
	char name[30];
	int x;
	int input;
	printf("������Ҫ�޸ĵ���ϵ�����֣�");
	scanf("%s", &name);
	for ( x = 0; x < ps->space; x++)
	{
		int com;
		com = strcmp(ps->data[x].name, name);
		if (com == 0)
		{
			printf("%s ��\n�Ա�%s\t���䣺%d\t�绰���룺%s\tסַ��%s\n\n",
				ps->data[x].name,
				ps->data[x].sex,
				ps->data[x].age,
				ps->data[x].tel,
				ps->data[x].addr);
			printf("��Ҫ�޸ĵ��ǣ�1.���� 2.�Ա� 3.���� 4.�绰���� 5.סַ");
			scanf("%d", &input);
			if (input==1&&2&&3&&4&&5){
				if (input==1)
				{
					char change[20];
					printf("�޸�Ϊ��");
					scanf("%s", change);
					strcpy(ps->data[x].name ,change);
				}
				if (input == 2)
				{
					char change[10];
					printf("�޸�Ϊ��");
					scanf("%s", change);
					strcpy(ps->data[x].sex, change);
				}
				if (input == 3)
				{
					int change;
					printf("�޸�Ϊ��");
					scanf("%s", &change);
					ps->data[x].age = change;
				}
				if (input == 4)
				{
					char change[12];
					printf("�޸�Ϊ��");
					scanf("%s", change);
					strcpy(ps->data[x].tel, change);
				}
				if (input == 5)
				{
					char change[50];
					printf("�޸�Ϊ��");
					scanf("%s", change);
					strcpy(ps->data[x].addr, change);
					printf("�޸ĳɹ���");
				}
			}
			else{
				printf("�Ƿ����룡");
			}
			break;
		}
		else if (x == ps->space - 1)
		{
			printf("���޴��ˣ�\n\n\n");
			break;
		}
	}
}
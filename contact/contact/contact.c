#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"

void init(struct person*ps){
	memset(ps->data, 0, sizeof(ps->data));
	ps->space = 0;
}

void menu(){
	printf("*********************************************************************\n");
	printf("*********************************************************************\n");
	printf("*********************      电话薄      ******************************\n");
	printf("********   1.增加   ********************   2.删除   ******************\n");
	printf("********   3.查询   ********************   4.修改   *****************\n");
	printf("********   5.展示   ********************   6.退出   *****************\n");
	printf("*********************************************************************\n");
	printf("*********************************************************************\n");
}

void add(struct person*ps){
	if (ps->space < SIZEMAX){
		printf("请输入联系人姓名：");
		scanf("%s", ps->data[ps->space].name);
		printf("请输入联系人性别：");
		scanf("%s", ps->data[ps->space].sex);
		printf("请输入联系人年龄：");
		scanf("%d", &(ps->data[ps->space].age));
		printf("请输入联系人电话号码：");
		scanf("%s", ps->data[ps->space].tel);
		printf("请输入联系人住址：");
		scanf("%s", ps->data[ps->space].addr);
		ps->space++;
		printf("录入成功！\n\n\n\n\n");
	}
	else{
		printf("通讯录已满！");
	}
}

void show(struct person*ps){
	int x;
	for (x = 0; x < ps->space;x++){
		printf("%d.姓名：%s\n",x+1,ps->data[x].name);
		printf("电话号码：%s\n\n",ps->data[x].tel);
	}
}

void del(struct person*ps){
	char name[30];
	int x;;
	printf("请输入要删除的联系人名字：");
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
					printf("删除成功！\n\n");
					break;
				}
			}else if (x==ps->space-1)
			{
				printf("查无此人！\n\n\n");
				break;
			}
	}
}

void search(struct person*ps){
	char name[30];
	int x;
	printf("请输入要搜索的联系人名字：");
	scanf("%s", &name);
	for (x = 0; x < ps->space; x++)
	{
		int com;
		com = strcmp(ps->data[x].name, name);
		if (com == 0)
		{
				printf("%s ：\n%s\t%d\t%s\t%s\n\n",
					ps->data[x].name,
					ps->data[x].sex,
					ps->data[x].age,
					ps->data[x].tel,
					ps->data[x].addr);
				break;
		}
		else if (x == ps->space - 1)
		{
			printf("查无此人！\n\n\n");
			break;
		}
	}
}

void change(struct person*ps){
	char name[30];
	int x;
	int input;
	printf("请输入要修改的联系人名字：");
	scanf("%s", &name);
	for ( x = 0; x < ps->space; x++)
	{
		int com;
		com = strcmp(ps->data[x].name, name);
		if (com == 0)
		{
			printf("%s ：\n性别：%s\t年龄：%d\t电话号码：%s\t住址：%s\n\n",
				ps->data[x].name,
				ps->data[x].sex,
				ps->data[x].age,
				ps->data[x].tel,
				ps->data[x].addr);
			printf("您要修改的是：1.姓名 2.性别 3.年龄 4.电话号码 5.住址");
			scanf("%d", &input);
			if (input==1&&2&&3&&4&&5){
				if (input==1)
				{
					char change[20];
					printf("修改为：");
					scanf("%s", change);
					strcpy(ps->data[x].name ,change);
				}
				if (input == 2)
				{
					char change[10];
					printf("修改为：");
					scanf("%s", change);
					strcpy(ps->data[x].sex, change);
				}
				if (input == 3)
				{
					int change;
					printf("修改为：");
					scanf("%s", &change);
					ps->data[x].age = change;
				}
				if (input == 4)
				{
					char change[12];
					printf("修改为：");
					scanf("%s", change);
					strcpy(ps->data[x].tel, change);
				}
				if (input == 5)
				{
					char change[50];
					printf("修改为：");
					scanf("%s", change);
					strcpy(ps->data[x].addr, change);
					printf("修改成功！");
				}
			}
			else{
				printf("非法输入！");
			}
			break;
		}
		else if (x == ps->space - 1)
		{
			printf("查无此人！\n\n\n");
			break;
		}
	}
}
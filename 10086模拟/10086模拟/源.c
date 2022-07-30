#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	printf("——————————10086查询功能——————————\n");
		while (2)
	{
			printf("输入1，查询当前话费余额\n");
			printf("输入2，查询当前剩余流量\n");
			printf("输入3，查询当前剩余通话\n");
			printf("输入0，退出自助查询系统！请输入：\n");
			int x;
			scanf("%d", &x);
			if (x == 1)
			{
				printf("当前话费余额为：999元\n");
			}
			else if (x == 2)
			{
				printf("当前剩余流量为5G\n");
			}
			else if (x == 3)
			{
				printf("当前剩余通话为：189分钟\n");
			}
			else if (x == 0)
			{
				break;
			}
			else
			{
				printf("输入错误\n");
			}
		{

		}
	}
	return 0;
}
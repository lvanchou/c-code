#include<stdio.h>

//方法一（已测试）

/*

int main()
{

	//决定输入数字的个数
	struct data
	{
		char input;
	};
	struct num
	{
		struct data number[inputcount];
	};
	int x = 0;
	int y = 0;

	//初始化数据
	struct num n;
	memset(n.number,0,sizeof(n.number));

	//输入数据
	printf("\n请输入%d个数字：",inputcount);
	for(x;x<inputcount;x++)
	{
		int num;
		char temp;
		scanf("%d",&num);
		temp = (char) num;
		n.number[x].input = temp;
	}

	//输出结果
	printf("\n解密结果为：");
	for(y ; y < inputcount;y++)
	{
		printf("%c",n.number[y].input);
	}
	printf("\n");
	return 0;
}

*/

//方法二

int main(void)
{
	int a = 2e5;
	int a1;
	int a2;
	int a3;
	int a4;
	int a5;
	int a6;
	int a7;
	int a8;
	int a9;
	int a10;
	int a11;

	char b1;
	char b2;
	char b3;
	char b4;
	char b5;
	char b6;
	char b7;
	char b8;
	char b9;
	char b10;
	char b11;

	printf("\n请输入11个数字：");

	scanf("%d %d %d %d %d %d %d %d %d %d %d", &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11);
	b1 = (char) a1;
	b2 = (char) a2;
	b3 = (char) a3;
	b4 = (char) a4;
	b5 = (char) a5;
	b6 = (char) a6;
	b7 = (char) a7;
	b8 = (char) a8;
	b9 = (char) a9;
	b10 = (char) a10;
	b11 = (char) a11;

	printf("\n解密结果为：");

	printf("%c%c%c%c%c%c%c%c%c%c%c", b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11);

	printf("\n");

	return 0;
}




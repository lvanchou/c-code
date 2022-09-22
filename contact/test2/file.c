#include<stdio.h>

int main(void){
	//声明变量
	int rad;
	double cir;
	double squ;

	//提示
	printf("半径>");

	//格式化输入
	scanf("%d",&rad);

	//计算
	cir=2*3.14*rad;
	squ=3.14*rad*rad;

	//格式化输出

	printf("该圆周长为>%.2e\n该圆面积为>%.2e\n",cir,squ);

	return 0;
}
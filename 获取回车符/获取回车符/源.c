#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char cChar;
	cChar = getchar();
	putchar(cChar);
	putchar('\n');
	//getchar();               得到空getchar()     即回车符！=换行
	putchar(getchar());
	putchar('\n');
	return 0;
}
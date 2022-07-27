#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void park();

int main()
{
	for (int x = 1; x <= 5; x++)
	{
		park();
	}
	return 0;
}

void park()
{
	static int count = 5;
	count=count-1;
	printf("Ê£Óà³µÎ»£º%d\n", count);
	return 0;
}
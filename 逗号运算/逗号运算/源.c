#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int x, y, z;
	x = 3;
	y = 3;
	z = 1;
	printf("%d,%d,%d", (++x, y++), z + x + y + 2);
	return 0;

}
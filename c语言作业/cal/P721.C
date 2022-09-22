#include<stdio.h>

int main(void)
{
	float x1, y1, z1;

	printf("please input x,y,z: ");
	scanf("%f,%f,%f", &x1, &y1, &z1);
	printf("\nResult =%f", x1 + (int)z1 % 3 * (int)(x1 + y1) % 2 / 4);
	return 0;
}
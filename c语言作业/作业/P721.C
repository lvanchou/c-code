#include<stdio.h>

int main(void)
{
	float x, y;

	int z1;

	printf("please input x,y,z: ");
	scanf("%f, %f, %f", &x, &y, &z1);
	printf("\nResult =%f", x + z1 % 3 * (int)(x + y) % 2 / 4);
	return 0;
}
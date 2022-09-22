#include<stdio.h>

int main(void)
{
	int input;

	printf("Please input an integer: ");
	scanf("%d", &input);
	if (input % 5 == 0 && input % 7 == 0)
	{
		printf("\nYes.");
	}
	else
	{
		printf("\nNo.");
	}
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int is_prime(int x){
	for (int i = 2; i <x; i++)
	{
		if (x%i == 0)
			return 1;
	}
	return 0;
}

int main(){
	while (true)
	{
		int x;
		scanf("%d", &x);
		for (int i = 0; i <= 200; i++)
		{
			if (is_prime(x) == 1){
				printf("%d不是素数\n", x);
				break;
			}
			else
			{
				printf("%d是素数\n", x);
				break;
			}
		}
	}
}


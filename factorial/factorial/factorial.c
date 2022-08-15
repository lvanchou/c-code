#define _CRT_SECURE_NO_WARNINGS 1
int factorial(int num)
{
	if (num != 0){
		return num*factorial(num - 1);
	}
	return 1;
}
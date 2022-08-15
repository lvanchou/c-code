#define _CRT_SECURE_NO_WARNINGS 1
int len(char* arr){
	static int times = 0;
	char x = arr[times];
	if (x!='\0')
	{
		times++;
		len(arr);
	}
	return times;
}
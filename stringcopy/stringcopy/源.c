#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void my_strcopy(char*dest,char*src)
{
	for (int i=0; 1; i++)
	{
		if (src[i] == '\0'){            //*src与src[i]表示相同意义
			break;                      //i++即可与src++相同
		}
		dest[i] = src[i];
	}
	
}

int main()
{
	char arr1[] = "#################";
	char arr2[] = "zyf";
	my_strcopy(&arr1,&arr2);
	printf("%s\n", arr1);
}
#include<stdio.h>

int main(void)
{
        /*********Found************/
        char *yy = "ok??\n";

		char* yy1 = &yy;

        /*********Found************/
        for (; *yy;yy++)
        {
                putchar(yy++);
        }

	return 0;
}

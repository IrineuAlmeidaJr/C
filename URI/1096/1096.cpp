#include<stdio.h>

int main()
{
	int I=1;
	while (I<=9)
	{
		printf("I=%d J=7\n", I);
		printf("I=%d J=6\n", I);
		printf("I=%d J=5\n", I);
		I+=2;
	}
	return 0;
}

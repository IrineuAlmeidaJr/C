#include<stdio.h>

int main()
{
	int num=1, x;
	scanf("%d", &x);
	while (num<=x)
	{
		if (num%2==1)
			printf("%d\n", num);
		num++;
	}
	return 0;	
}

#include<stdio.h>

int main()
{
	int N, num1=1, num2=1, num3=1, i=0;
	scanf("%d", &N);
	
	while(i<N)
	{
		printf("%d %d %d\n", num1, num2, num3);
		num1++;
		num2=num1*num1;
		num3=num1*num2;
		i++;
	}		

	return 0;
}

#include<stdio.h>

int main()
{
	int N, num1=1, num2=2, num3=3, i=0;
	scanf("%d", &N);
	
	while(i<N)
	{
		printf("%d %d %d PUM\n", num1, num2, num3);
		num1+=4;
		num2+=4;
		num3+=4;
		i++;
	}		

	return 0;
}

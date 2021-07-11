#include<stdio.h>

int main()
{
	int num, i=1 ;
	scanf("%d", &num);
	while (i<=6)
	{
		if (num%2==1)
			{
			printf("%d\n", num);
			i++;	
			}
		num++;
				
	}
	return 0;	
}

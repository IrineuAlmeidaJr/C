#include<stdio.h>

int main()
{
	int num, i=1;
	scanf("%d", &num);
	while (i<=10000)
	{
		if (i%num==2)
			printf("%d\n", i);		
		i++;
	}	
	return 0;
}

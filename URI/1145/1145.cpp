#include<stdio.h>

int main()
{
	int X, Y, num=1, i;
	scanf("%d %d", &X, &Y);

	while(num<=Y)
	{
		i=1;
		while(i<=X && num<=Y)
		{
			if (i<=X-1)
				printf("%d ", num);
			else
				printf("%d\n", num);		
			num++;
			i++;	
		}			
	}		

	return 0;
}

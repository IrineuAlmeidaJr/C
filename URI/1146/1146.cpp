#include<stdio.h>

int main()
{
	int X, num=1;
	scanf("%d", &X);

	while(X!=0)
	{
		for(num=1; num<=X; num++)
			{
			if (num<=X-1)
				printf("%d ", num);
			else
				printf("%d\n", num);	
			
			}

		scanf("%d", &X);				
	}		
	
	return 0;
}

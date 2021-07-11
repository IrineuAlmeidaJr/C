#include<stdio.h>

int main()
{
	int x, y, maior, menor, resto;
	scanf("%d %d", &x, &y);
	
	if (x>y)
		{
		maior=x;
		menor=y;
		}
	else
		{
		maior=y;
		menor=x;
		}
		
	for (menor+=1; menor<maior; menor++)
	{
		resto=menor%5;
		if (resto== 2 || resto==3)
			printf("%d\n", menor);
	}
		
	return 0;
}

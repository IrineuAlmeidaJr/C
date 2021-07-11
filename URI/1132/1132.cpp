#include<stdio.h>

int main()
{
	int x, y, maior, menor, soma=0;
	
	scanf("%d %d", &x, &y);
	if (x>y)
		maior=x;
	else
		maior=y;
	if (x<y)
		menor=x;
	else
		menor=y;
	for(menor; menor<=maior; menor++)
	{
		if (menor%13!=0)
			soma+=menor;
	}
	printf("%d\n", soma);
	return 0;
}

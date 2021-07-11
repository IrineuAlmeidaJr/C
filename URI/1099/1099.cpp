#include<stdio.h>

int main()
{
	int N, rep=1, X, Y, menor, maior, soma;
	
	scanf("%d",&N);
	while (rep<=N)
	{
		soma=0;
		scanf("%d %d", &X, &Y);
		if (X>Y)
		{
			menor=Y;
			maior=X;
		}
		else 
		{
			menor=X;
			maior=Y;
		}
		menor++;
		while (menor<maior)
		{
			if (menor%2==1)
			soma+=menor;
			menor++;
		}
		printf("%d\n", soma);	
		rep++;	
	}	
	return 0;
}

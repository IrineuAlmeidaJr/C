#include<stdio.h>
#define TF 10000

int main()
{
	int N, M, temperatura[10000], maior, menor, soma, num_teste=1, i, j, k;
	
	scanf("%d %d", &N, &M);
	while(N!=0 && M!=0)
	{
		for(i=0; i<N; i++)
			scanf("%d", &temperatura[i]);
		
		i=0;
		k=0;
		maior=-201;
		menor=201;		
		while(i<N)
		{			
			i=k;
			soma=0;
			for(j=0; j<M; j++)
			{				
				soma+=temperatura[i];
				i++;
			}
			
			soma/=M;			
			if(soma>maior)
				maior=soma;										
			if(soma<menor)
				menor=soma;	
			
			k++;			
		}
		printf("Teste %d\n%d %d\n\n", num_teste, menor, maior);
		num_teste++;		
		scanf("%d %d", &N, &M);	
	}	
	return 0;
}


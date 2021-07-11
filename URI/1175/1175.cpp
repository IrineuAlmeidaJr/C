#include<stdio.h>
#define TF 20

int main()
{
	int vet[TF], i, aux1, aux2;
	
	for (i=0; i<TF; i++)
		scanf("%d", &vet[i]);
	
	i=0;
	while (i<TF/2)
	{
		aux1=vet[TF-1-i];
		aux2=vet[i];
		vet[i]=aux1;
		vet[TF-1-i]=aux2;
		i++;
	}
	
	for (i=0; i<TF; i++)
		printf("N[%d] = %d\n", i, vet[i]);
		
	return 0;
}



#include<stdio.h>
#define TF 10

int main()
{
	int vet[TF], i;
	
	for (i=0; i<TF; i++)
		scanf("%d", &vet[i]);
	
	for (i=0; i<TF; i++)
		if (vet[i]<=0)
			vet[i]=1;
	
	for (i=0; i<TF; i++)
 		printf("X[%d] = %d\n", i, vet[i]);
 	
 	return 0;
}

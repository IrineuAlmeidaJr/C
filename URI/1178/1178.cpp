#include<stdio.h>
#define TF 100

int main()
{
	int i;
	double num, vet[TF];
	scanf("%lf", &num);

	for(i=0; i<TF; i++)
		if (i>0 && i<100)
			vet[i]=vet[i-1]/2;
		else
			vet[i]=num;
			
	for(i=0; i<TF; i++)
		printf("N[%d] = %.4lf\n", i, vet[i]);


	return 0;
}



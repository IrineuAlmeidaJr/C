#include<stdio.h>

int main()
{
	int cod1, cod2, num_pe1, num_pe2;
	float val_uni1,val_uni2, valor_total;
	scanf("%d %d %f", &cod1, &num_pe1, &val_uni1);
	scanf("%d %d %f", &cod2, &num_pe2, &val_uni2);
	
	valor_total=(num_pe1*val_uni1)+(num_pe2*val_uni2);
	
	printf("VALOR A PAGAR: R$ %.2f\n",valor_total);
		
	return 0;
}

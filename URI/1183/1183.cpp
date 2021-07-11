#include<stdio.h>
#define TF 12

int main()
{
	int i, j, k=1, quant=0; 
	float mat[TF][TF], soma=0;
	char op;
	
	scanf("%c", &op);
	
	for(i=0; i<TF; i++)
		for(j=0; j<TF; j++)
			scanf("%f", &mat[i][j]);
			
	
	for(i=0; i<TF; i++)
	{			
		for(j=k; j<TF; j++)
		{
			soma+=mat[i][j];
			quant++;
		}
		k++;
	}
	
	switch(op)
	{
		case 'S':
			printf("%.1f\n", soma);
			break;
		case 'M':
			
			printf("%.1f\n", (float)soma/quant);
	}	

	return 0;
}

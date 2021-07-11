#include<stdio.h>
#define TF 12

int main()
{
	int i, j, quant=0, k; 
	float mat[TF][TF], soma=0;
	char op;
	
	scanf("%c", &op);
	
	for(i=0; i<TF; i++)
		for(j=0; j<TF; j++)
			scanf("%f", &mat[i][j]);
			
	k=TF-1;
	for(i=0; i<TF; i++)
	{			
		for(j=0; j<k; j++)
		{
			soma+=mat[i][j];
			quant++;
		}
		k--;
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

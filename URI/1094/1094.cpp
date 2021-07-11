#include<stdio.h>

int main()
{
	int rep, i, quant, total=0, R_total=0, S_total=0, C_total=0;
	float R_por, S_por, C_por; 
	char tipo;
	scanf("%d", &rep);
	
	for(i=0; i<rep; i++)
	{
		scanf("%d %c", &quant, &tipo);
		switch (tipo)
		{
			case 'R':
				R_total+=quant;
				total+=quant;
				break;
			case 'S':
				S_total+=quant;
				total+=quant;
				break;
			case 'C':
				C_total+=quant;
				total+=quant;				 
		}
	}
	R_por=(float)R_total/total*100;
	S_por=(float)S_total/total*100;
	C_por=(float)C_total/total*100;

	printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\nPercentual de coelhos: %.2f %%\nPercentual de ratos: %.2f %%\nPercentual de sapos: %.2f %%\n", total, C_total, R_total, S_total, C_por, R_por, S_por);
	
	return 0;
}

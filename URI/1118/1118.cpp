#include<stdio.h>

int main()
{
	int i, resp;
	float nota, nota_valida;
	
	do	
	{
		while(i<2)
		{
			scanf("%f", &nota);
			if (nota>=0 && nota<=10)
			{
				nota_valida+=nota;
				i++;
			}
			else
				printf("nota invalida\n");
		}
		if (i==2)
			printf("media = %.2f\n", nota_valida/2);
	
		printf("novo calculo (1-sim 2-nao)\n");
		scanf("%d", &resp);
		
		if	(resp<1 || resp>2)
			i=10;
	
		if (resp==1)
		{
			i=0;
			nota_valida=0;
		}
	}
	while (resp!=2);
	
	return 0;
}

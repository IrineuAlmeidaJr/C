#include<stdio.h>

int main()
{
	int i=0;
	float nota, nota_valida=0;
		
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
	printf("media = %.2f\n", nota_valida/2)	
	return 0;
}

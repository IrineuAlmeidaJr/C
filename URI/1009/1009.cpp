#include<stdio.h>

int main()
{
	char nome_vendedor;
	double salario_fixo, vendas, salario_total;
	
	scanf("%s %lf %lf", &nome_vendedor, &salario_fixo, &vendas);
	printf ("TOTAL = R$ %.2lf\n", salario_total, salario_total=(vendas*15/100)+salario_fixo);
	
	return 0;
}

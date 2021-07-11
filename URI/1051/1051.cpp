#include<stdio.h>

int main()
{
	float salario, imposto;
	scanf ("%f", &salario);
		
	if (salario<=2000)
		printf("Isento\n");
	else
		if (salario>2000 && salario<=3000)
			printf("R$ %.2f\n", imposto, imposto=(salario-2000)*0.08);
		else 
			if (salario>3000 && salario<=4500)
				printf("R$ %.2f\n", imposto, imposto=(salario-3000)*0.18 + 1000*0.08);
			else
				if(salario>4500)
				printf("R$ %.2f\n", imposto, imposto=(salario-4500)*0.28 + 1000*0.08 + 1500*0.18);
	return 0;	
}

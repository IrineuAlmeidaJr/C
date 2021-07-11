#include<stdio.h>


int main()
{
	int notas;
	float valor;
	scanf("%f", &valor);
	
	notas=valor/100;
	printf("NOTAS:\n%d nota(s) de R$ 100.00\n", notas);  
	
	valor=(int)valor%100;
	notas=valor/50;
	printf("%d nota(s) de R$ 50.00\n", notas);
	
	valor=(int)valor%50;
	notas=valor/20;
	printf("%d nota(s) de R$ 20.00\n", notas);
	
	valor=(int)valor%20;
	notas=valor/10;
	printf("%d nota(s) de R$ 10.00\n", notas);

	valor=(int)valor%10;
	notas=valor/5;
	printf("%d nota(s) de R$ 5.00\n", notas);
	
	valor=(int)valor%5;
	notas=valor/2;
	printf("%d nota(s) de R$ 2.00\n", notas);
	
	valor=(int)valor%2;
	notas=valor/1;
	printf("MOEDAS:\n%d moeda(s) de R$ 1.00\n", notas);
	
	/* PARTE DAS MOEDAS: """""não consegui"""""
	valor=(int)valor%1;
	notas=(valor*100)/50;
	printf("%d moeda(s) de R$ 0.50\n", notas);
	*/
		
 	return 0;
}

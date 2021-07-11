#include<stdio.h>

//Declaração dos protótipos da função
int leitura_rep();
int leitura_num(int rep);
void teste_exi(int num);

//Função principal
int main()
{
	int valor;
	leitura_rep();
	return 0;	
}

//Implementação das funções 
//Leitura da rep
int leitura_rep()
{
	int rep, valor;
	scanf("%d", &rep);
	leitura_num(rep);
	
}
//Leitura do numero
int leitura_num(int r)
{
	int num, i;
	for(i=0; i<r; i++)
	{
		scanf("%d", &num);
		teste_exi(num);	
	}
}
//Calculo e exbição
void teste_exi(int num)
{
	if(num%2==0)
		printf("0\n");
	else
		printf("1\n");
}

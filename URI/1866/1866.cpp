#include<stdio.h>

//Declara��o dos prot�tipos da fun��o
int leitura_rep();
int leitura_num(int rep);
void teste_exi(int num);

//Fun��o principal
int main()
{
	int valor;
	leitura_rep();
	return 0;	
}

//Implementa��o das fun��es 
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
//Calculo e exbi��o
void teste_exi(int num)
{
	if(num%2==0)
		printf("0\n");
	else
		printf("1\n");
}

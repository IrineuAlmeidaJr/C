#include<stdio.h>

int main()
{
	int N=0, i, menor=9999, m_posi;
	scanf("%d", &N);
	int x[N]; //Porque tenho que declarar ele depois da leitura do tamanho do vetor?
	
	for(i=0; i<N; i++)
	{
		scanf("%d", &x[i]);
		if (x[i]<menor)
		{
			menor=x[i];
			m_posi=i;
		}
	}
	//Se eu não fizer o que escrevi na Linha 7, vai apenas até o vetor 8	
	printf("Menor valor: %d\nPosicao: %d\n", menor, m_posi);
	return 0;
}

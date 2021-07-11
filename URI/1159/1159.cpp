#include<stdio.h>

int soma(int num);
void exibir(int n);

int main()
{
	int num, i, res;
	
	scanf("%d", &num);
	while(num!=0)
	{
		if(num==-1)
			num=0;
		else
		{	
			if(num%2==1)
				num++;	
		}
		res=soma(num);
		exibir(res);
		scanf("%d", &num);
	}
	return 0;
}

//soma
int soma(int num)
{
	int soma=0, i;
	for(i=0; i<5; i++)
		{
			soma+=num;	
			num+=2;		
		}
	return soma;
}
//Exibir
void exibir(int n)
{
	printf("%d\n", n);	
}

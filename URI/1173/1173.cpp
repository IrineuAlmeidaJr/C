#include<stdio.h>
#define TF 10
int main()
{
	int vetor[TF], num, i;
	
	scanf("%d", &num);
	for(i=0; i<TF; i++)
		if (i==0)
			vetor[i]=num;
		else
			{
				num+=num;
				vetor[i]=num;
			}
	
	for(i=0; i<TF; i++)
		printf("N[%d] = %d\n", i, vetor[i]);
		
	return 0;
}


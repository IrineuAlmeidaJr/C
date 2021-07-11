#include<stdio.h>

int main()
{
	int num, i=1, par=0, imp=0, pos=0, neg=0;
	while (i<=5)
	{
		scanf("%d", &num);
		if (num%2==0)
			par++;
		else	
			imp++;
		if (num>0)
			pos++;
		else
			if (num<0)
				neg++;
		i++;
	}
	printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", par, imp, pos, neg);
	return 0;	
}

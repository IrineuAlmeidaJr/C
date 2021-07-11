#include <stdio.h>

int main()
{
	int num, rep, num_div=0, div=1, i; 
	scanf("%d", &rep);	
	for (i=0; i<rep; i++)
	{
		num_div=0;
		div=1;
		scanf("%d", &num);
		while (div<=num && num_div<=3)
		{
			if (num%div==0)
				num_div++;
			div++;
		}
	
		if (num_div==2)
			printf("%d eh primo\n", num);
		else
			printf("%d nao eh primo\n", num);
	}
	
	
	return 0;
}

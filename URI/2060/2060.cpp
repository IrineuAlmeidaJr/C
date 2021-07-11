#include<stdio.h>

int main()
{
	int num, mult_2=0, mult_3=0, mult_4=0, mult_5=0, num_rep, i=1;
	scanf("%d", &num_rep);
	while (i<=num_rep)
	{
		i++;
		scanf("%d", &num);
		if (num%2==0)
			mult_2++;
		if (num%3==0)
			mult_3++;
		if (num%4==0)
			mult_4++;
		if (num%5==0)
			mult_5++;					
	}
	printf("%d Multiplo(s) de 2\n", mult_2);
	printf("%d Multiplo(s) de 3\n", mult_3);
	printf("%d Multiplo(s) de 4\n", mult_4);
	printf("%d Multiplo(s) de 5\n", mult_5);
	
	return 0;
}

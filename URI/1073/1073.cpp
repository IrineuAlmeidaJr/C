#include<stdio.h>

int main()
{
	int limite, i=2, a;
	scanf("%d", &limite);
 	while (i<=limite)
 	{
 		if (i%2==0)
 			printf("%d^2 = %d\n", i, i*i);
 		i++;
	}
 	
	return 0;
}

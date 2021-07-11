#include <stdio.h>
#define TF 1000

int main()
{
	int T, vetN[TF], i;
	scanf("%d", &T);

	for (i=0; i<TF; i++)
		vetN[i]=i%T;
	
	for (i=0; i<TF; i++)
		printf("N[%d] = %d\n", i, vetN[i]);
	
	return 0;
}

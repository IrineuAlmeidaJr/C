#include<stdio.h>
int main()
{
	int N,n, i;
	scanf("%d", &N);
	n=N;
	for(i=1; i<N; i++)
		n=n*(N-i);
	printf("%d\n", n);
	
	return 0;
}


#include<stdio.h>

int main()
{
	int a, b, c, d, res;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	res=a%2;
	if (b>c && d>a && c+d>a+b && a>0 && b>0 && c>0 && d>0 && res==0)
		printf("Valores aceitos\n");
	else
		printf("Valores nao aceitos\n");
	
	return 0; 
}

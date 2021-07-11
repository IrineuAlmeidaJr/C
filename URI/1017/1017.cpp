#include<stdio.h>

int main()
{
	int tgh, vm;
	float consumo, s;

	scanf("%d %d", &tgh, &vm);
	s=vm*tgh, consumo=s/12;
	printf("%.3f\n",consumo);
	return 0; 
}

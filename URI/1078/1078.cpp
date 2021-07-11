#include<stdio.h>

int main()
{
	int num_casos, i=1; 
	float val1, val2, val3;
	scanf("%d", &num_casos);
	while (i<=num_casos)
	{
		scanf("%f %f %f", &val1, &val2, &val3);
		printf("%.1f\n",(val1*2+val2*3+val3*5)/10);
		i++;
	}
	return 0;
}

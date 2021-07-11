#include<stdio.h>

int main()
{
	int i=1, pos=0;
	float num;
	while (i<=6)
	{
		scanf("%f", &num);
		if (num>0)
			pos++;
		i++;
	}
	printf("%d valores positivos\n", pos);
	return 0;	
}

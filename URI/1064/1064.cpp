#include<stdio.h>

int main()
{
	int i=1, pos=0;
	float num, pos_med=0;
	while (i<=6)
	{
		scanf("%f", &num);
		if (num>0)
			{
			pos++;
			pos_med=pos_med+num;
			}
		i++;
	}
	printf("%d valores positivos\n%.1f\n", pos, pos_med/pos);
	return 0;	
}

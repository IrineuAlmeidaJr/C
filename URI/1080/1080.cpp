#include<stdio.h>

int main()
{
	int num, maior=0, pos, i=1; 
	while (i<=100)
	{
		scanf("%d", &num);
		if (num>maior)
		{
			maior=num;
			pos=i;
		}
		i++;
	}
	printf("%d\n%d\n", maior, pos);
	return 0;
}

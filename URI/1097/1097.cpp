#include<stdio.h>

int main()
{
	float I=0, j1=1, j2=2, j3=3;
	while (I<=2.1)
	{
		if (I==0.0)
			{
			printf("I=0 J=%.1f \n", I, j1);
			printf("I=0 J=%.1f \n", I, j2);
			printf("I=0 J=%.1f \n", I, j3);
			}
		if (I==2.0)
			{
			printf("I=2 J=%.1f \n", I, j1);
			printf("I=2 J=%.1f \n", I, j2);
			printf("I=2 J=%.1f \n", I, j3);
			}
		printf("I=%.1f J=%.1f \n", I, j1);
		printf("I=%.1f J=%.1f \n", I, j2);
		printf("I=%.1f J=%.1f \n", I, j3);
		I+=0.2;
		j1+=0.2;
		j2+=0.2;
		j3+=0.2;
	}
	return 0;
}

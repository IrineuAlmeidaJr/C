#include<stdio.h>

int main()
{
	int tipo_com, alc=0, gas=0, dis=0;
	scanf("%d", &tipo_com);
	
	while (tipo_com!=4)
	{
		if (tipo_com<5 && tipo_com>0)
		{		
			switch (tipo_com)
			{
			 case 1:
			 	alc++;
			 	break;
			 case 2:
			 	gas++;
				break;
			 case 3:
			 	dis++;
			}
		}
		scanf("%d", &tipo_com);
	}
	printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", alc, gas, dis);	

	return 0;
}

#include<stdio.h>

int main()
{

	int cod1,cod2;
	float total;
	
	scanf ("%d %d", &cod1, &cod2);
	switch (cod1)
		{
		case 1:
			printf("Total: R$ %.2f\n", total, total=cod2*4);
			break;
		case 2:
			printf("Total: R$ %.2f\n", total, total=cod2*4.50);	
			break;
		case 3:
			printf("Total: R$ %.2f\n", total, total=cod2*5);
			break;
		case 4:
			printf("Total: R$ %.2f\n", total, total=cod2*2);	
			break;
		case 5:
			printf("Total: R$ %.2f\n", total, total=cod2*1.50);	
		}
	return 0;
}

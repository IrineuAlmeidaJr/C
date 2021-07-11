#include<stdio.h>
#define TF 12
int main()
{
	int i, j, linha_op;
	float mat[TF][TF], resul=0;
	char op;
	scanf("%d %c", &linha_op, &op);
	
	for(i=0; i<TF; i++)
		for(j=0; j<TF; j++)
			scanf("%f", &mat[i][j]);
	
	for(j=0; j<TF; j++)
		resul+=mat[linha_op][j];	

		
	switch(op)
	{
		case 'S':
			printf("%.1f\n", resul);	
			break;
		case 'M':
			resul=resul/12;
			printf("%.1f\n", resul);	

	}
	
	return 0;
	
}

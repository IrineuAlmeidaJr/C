#include<stdio.h>
#define TF 12
int main()
{
	int i, j, coluna_op;
	float mat[TF][TF], resul=0;
	char op;
	scanf("%d %c", &coluna_op, &op);
	
	for(i=0; i<TF; i++)
		for(j=0; j<TF; j++)
			scanf("%f", &mat[i][j]);
	
	for(i=0; i<TF; i++)
		resul+=mat[i][coluna_op];	

		
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

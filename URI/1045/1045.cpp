#include<stdio.h>

int main()
{
	float A, B, C;
	scanf("%f %f %f", &A, &B, &C);
	
	if (B<A<C)
		B=A;	
	else
		if(A<B<C)
		B=B;
		else
			if(A<C<B)
			B=C;

	if(A>B && A>C)
		A=A;
	else
		if(B>A && B>C)
			A=B;
		else
			A=C;
	
	if (A<B && A<C)
		C=A;
	else
		if(B<A && B<C)
			C=B;
		else
			C=C;

	
	printf("Ordem: A = %.1f ; B = %.1f ; C = %.1f\n", A, B, C);
	
	
	
	
	
	if (A>=B+C)
		{
		printf("NAO FORMA TRIANGULO\n");
		return 0;
		}
	if (A==B+C)
		printf("TRIANGULO RETANGULO\n");
	else
		if(A>B+C)
			printf("TRIANGULO OBTUSANGULO\n");
		else
			if(A<B+C)
				printf("TRIANGULO ACUTANGULO\n");
			
	if (A==B && A==C)
		printf("TRIANGULO EQUILATERO\n");
	else
		if (A==B || B==C || C==A)
			printf("TRIANGULO ISOSCELES\n");	
	

	
	
	return 0;
}

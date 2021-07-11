#include<stdio.h>

int main ()
{
	float A, B, C, resul_tri;
	scanf("%f %f %f", &A, &B, &C);
	resul_tri=A+B+C;
	
	if (A<B+C)
		printf("Perimetro1 = %.1f\n", resul_tri);
	else
		if (B<A+C)
			printf("Perimetro2 = %.1f\n", resul_tri);
		else
			if(C<A+B)
				printf("Perimetro3 = %.1f\n", resul_tri);
			else
				printf("Trapezio");
			
	
	return 0;
}

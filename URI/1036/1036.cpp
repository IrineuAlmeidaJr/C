#include<stdio.h>
#include<math.h>

int main()
{
	double a,b,c,x1,x2, del;
	scanf("%lf %lf %lf", &a, &b, &c);
	del=(b*b)-4*a*c, x1=(-b+sqrt(del))/(2*a); x2=(-b-sqrt(del))/(2*a);
		if (2*a==0 || del<0)
			printf("Impossivel calcular\n");
		else
 			printf("R1 = %.5lf\nR2 = %.5lf\n", x1, x2);
	return 0;
}


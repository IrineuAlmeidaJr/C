#include<stdio.h>
 
 int main()
 {
 	int distancia;
 	float combustivel_gasto, consumo_medio;
 	scanf("%d %f", &distancia, &combustivel_gasto);
 	consumo_medio=distancia/combustivel_gasto;
 	
	printf("%.3f km/l\n",consumo_medio);
 	
	
	
	 
	return 0;
 }

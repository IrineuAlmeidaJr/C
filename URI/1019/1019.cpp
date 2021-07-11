#include<stdio.h>
 
 int main()
 {
	int tempo_s, horas, minutos, segundo;
	scanf("%d", &tempo_s);
	
	minutos=tempo_s/60;
	horas= minutos/60;
	
	printf("%d:%d:%d\n",horas, minutos%60 ,tempo_s%60);
	
	
	
	return 0;
 }

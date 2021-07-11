#include<stdio.h>
 
 int main()
 {
	int idade_dias, meses, anos, dias;
	scanf("%d", &idade_dias);
	
	anos=idade_dias/365;
	meses=idade_dias%365/30;
	dias=idade_dias%365%30;
	printf("%d ano(s)\n%d mes(es)\n%d dia(s)",anos, meses, dias);
	
	return 0;
 }

#include<stdio.h>
 
 int main()
 {
 	int  hi,mi,ht,mt,h_tempo,m_tempo,tempo_jogo;
 	
 	scanf("%d %d %d %d",&hi,&mi,&ht,&mt);
 	h_tempo=ht-hi, m_tempo=mt-mi;
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",h_tempo,m_tempo);
	 
	return 0;
 }

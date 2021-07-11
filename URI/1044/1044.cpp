#include<stdio.h>

int main()
{
	int hora_inicial, hora_final;
	scanf("%d %d", &hora_inicial, &hora_final);
	
	if (hora_final==hora_inicial)
		printf("O JOGO DUROU 24 HORA(S)\n");
	if (hora_final>hora_inicial)
		printf("O JOGO DUROU %d HORA(S)\n", hora_final-hora_inicial);
	if (hora_inicial>hora_final)
		printf("O JOGO DUROU %d HORA(S)\n", 24-hora_inicial+hora_final);
	
	return 0;
}

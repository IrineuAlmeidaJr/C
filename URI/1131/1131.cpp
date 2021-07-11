#include<stdio.h>

int main()
{
	int inter, gre, total_gol, empate=0,  grenais=0, v_inter=0, v_gre=0, resp;
	
	do
	{
		scanf("%d %d", &inter, &gre);
		total_gol=inter+gre;
		grenais++;
		if (inter>gre)
			v_inter++;
		else
			v_gre++;
		if (total_gol==0)
			empate++;
		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%d", &resp);
	}
	while (resp==1);
	printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n", grenais, v_inter, v_gre, empate);
	if (v_inter>v_gre)
		printf("Inter venceu mais\n");
	else 
		printf("Gremio venceu mais\n");
	if	(v_inter==v_gre)
			printf("Nao houve vencedor\n");
		
	return 0;
}

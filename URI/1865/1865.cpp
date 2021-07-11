#include<stdio.h>
#include<string.h>

int main(void)
{
	int num, forca, i=0;
	char nome[20], nome2[]={'T', 'h', 'o', 'r'};
	scanf("%d", &num);
	
		printf("Heroi: \n");
		fgets(nome, 20, stdin);
		printf("Forca: \n");
		scanf("%d", &forca);
		if(strcmp(nome,nome2)==0)
			printf("Y\n");
		else
			printf("N\n");
		i++;	

	
	
	return 0;
}

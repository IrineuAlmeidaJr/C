#include<stdio.h>
#include<string.h>
#define TF 20
int main()
{
	char ent1[TF], ent2[TF], ent3[TF];
	
	scanf("%s %s %s", &ent1, &ent2, &ent3);
	if(strcmp(ent1,"vertebrado")==0)
	{
		if(strcmp(ent2,"ave")==0)
		{
			if(strcmp(ent3,"carnivoro")==0)
				printf("aguia\n");
			else
				printf("pomba\n");
		}
		else 
		{
			if(strcmp(ent3,"onivoro")==0)
				printf("homem\n");
			else
				printf("vaca\n");
		}		
	}
	else 
	{
		if(strcmp(ent2,"inseto")==0)
		{
			if(strcmp(ent3,"hematofago")==0)
				printf("pulga\n");
			else
				printf("largata\n");
		}
		else 
		{
			if(strcmp(ent3,"hematofago")==0)
				printf("sanguessuga\n");
			else
				printf("minhoca\n");
		}
	}		
	return 0;	
}

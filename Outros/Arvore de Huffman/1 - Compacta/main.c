/*
    101730322 - EDUARDO HENRIQUE SHIKAMA DIAS
    102022798 - IRINEU DE ALMEIDA JUNIOR
*/

#include<stdio.h>
#include<string.h>

#define TF 100
#define FRASE 400
#define PALAVRA 50
#define CODIGO 400

#include "TAD.h"

int main() 
{
	int TL = 0 , i;
	char frase[FRASE], cod[CODIGO], *palavra;
	Huffman *arvh;
	Tabela tabela[TF];
	
	init(&arvh);
	
//	strcpy(frase, "amo como ama o amor nao conheco nenhuma outra razao para amar senao amar que queres que te diga alem de que te amo se o que quero dizer-te e que te amor");
//	strcpy(frase, "amo nenhuma a a amo outra amor nao amo amo nenhuma a nenhuma o o o o l l amo");
//	strcpy(frase, "A b r a c a d a b r a !");
//	strcpy(frase, "amo como amo o amor nao conheco nenhuma outra razao para amar");
	strcpy(frase, "individuo ou objeto que encontra em estado depreciado se comparado com os padroes da normalidade ocorrido decorrente de fatos isolados passagem do tempo ou simplesmente de sua ma concepcao ou fabricacao");
	
	montarTabela(tabela, &TL, frase);
	
	criarLista(&arvh, tabela, TL);
	
	//Criar Arvore Huffman
	criaArvore(&arvh);
	
	//exibirPreOrdem(arvh);
	
	// Preencher Código na Tabela de Vetores
	peencherCodigoTabela(arvh, tabela, strcpy(cod, ""));
	
	mostrarTabela(tabela, TL);
	
	// Formar frase codificada
	printf("\n\n");
	
	codificarFrase(tabela, cod, frase, TL);
	
	printf("\n\nCodigo: %s\n\n", cod);
	
	geraArqTab(tabela, TL);
	gerarAquivoCodigo(cod);
	
	return 0;	
}

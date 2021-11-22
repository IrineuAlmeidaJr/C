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
	int TL = 0;
	char codigo[CODIGO], frase[FRASE];
	Huffman *arvh;
	Tabela tab[TF];
	
	montarTabela(tab, &TL);
	mostrarTabela(tab, TL);
	
	lerCodigo(&codigo);
	printf("\n\n%s", codigo);
	
	montarArvore(&arvh, tab, TL);
	
	//exibirPreOrdem(arvh);
	printf("\n\n");
	decodificar(arvh, tab, codigo, &frase);
	
	
	
	
	return 0;	
}

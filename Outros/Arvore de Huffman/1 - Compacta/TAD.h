struct tabela
{
	char palavra[PALAVRA];
	int frequencia;
	char codigo[25]; 
};
typedef struct tabela Tabela;

void inserir(Tabela vet[], int *TL, char palavra[])
{
	int pos = 0;
	while(pos < (*TL) && strcmp(vet[pos].palavra, palavra) != 0)
		pos++;
	if(pos == *TL) // Não achou -> insere a palavra
	{
		strcpy(vet[*TL].palavra, palavra);
		vet[*TL].frequencia = 1;		
		// Aqui não lê código, ele será inserido quando a árvore tiver pronta
		(*TL)++;
	}
	else // Achou incrementa a frequência 
	{
		vet[pos].frequencia++;
	}	
}

void montarTabela(Tabela tab[], int *TL, char frase[FRASE])
{
	int i, j;
	i = j = 0;
	char palavra[PALAVRA];
	
	while(i < strlen(frase))
	{
		if(frase[i] != ' ')
		{
			palavra[j++] = frase[i];
		}
		
		if(frase[i] == ' ')
		{
			palavra[j] = '\0';
			inserir(tab, &(*TL), palavra);			
			j = 0;
		}
		
		i++;
	}
	palavra[j] = '\0';
	inserir(tab, &(*TL), palavra);		
}

void mostrarTabela (Tabela tabela[], int TL)
{
	int i;
	printf("\n\nPos\tPalavra\t\tFreq\tCod\n");
	for(i = 0 ; i < TL; i++)
	{	
		printf("%d\t%s\t\t%d\t%s\n",i, tabela[i].palavra, tabela[i].frequencia, tabela[i].codigo);
	}
}

// Huffman
struct huffman
{
	int freq, posTab;
	struct huffman *esq, *dir, *prox;
};
typedef struct huffman Huffman;

void init(Huffman **H)
{
	*H = NULL;
}

// ---> Continua Huffman
Huffman *criaCaixa(Tabela tab, int posTab)
{
	Huffman *nova = (Huffman*)malloc(sizeof(Huffman));
	nova->dir = nova->esq = nova->prox = NULL;
	nova->freq = tab.frequencia;
	nova->posTab = posTab;
	
	return nova;
}

void inserirOrdenado(Huffman **H, Huffman *nova)
{
	Huffman *ant, *atual;
	
	if(*H == NULL || nova->freq < (*H)->freq)
	{
		nova->prox = *H;
		*H = nova;
	}
	else
	{
		if((*H)->prox == NULL && (*H)->freq <= nova->freq)
		{
			(*H)->prox = nova;			
		}
		else 
		{
			ant = *H;
			atual = (*H)->prox;
			while(atual->prox != NULL && nova->freq > atual->freq)
			{
				ant = atual;
				atual = atual->prox;
			}
			if(nova->freq > atual->freq)
			{
				atual->prox = nova;
			}
			else
			{
				ant->prox = nova;
				nova->prox = atual;	
			}	
		}			
	}		
}

Huffman *criaNo(Huffman *esq, Huffman *dir)
{
	Huffman *no = (Huffman*)malloc(sizeof(Huffman));
	no->posTab = -1;
	no->freq = esq->freq + dir->freq;
	no->esq = esq;
	no->dir = dir;
	no->prox = NULL;
	
	return no;
}

void criaArvore(Huffman **tree)
{
	Huffman *no;
	while((*tree)->prox != NULL) // ver se é com isso mesmo ou tree == NULL
	{
		no = criaNo(*tree, (*tree)->prox);
		*tree = (*tree)->prox->prox;
//		no->esq->prox = NULL;
//		no->dir->prox = NULL;
		inserirOrdenado(&*tree, no);
	}
}
 
void criarLista(Huffman **tree, Tabela tab[], int TL)
{
	int i;
	Huffman *aux;
	for(i = 0 ; i < TL; i++)
	{
	 	aux = criaCaixa(tab[i], i);
		inserirOrdenado(&*tree, aux);		
	}		
}  
 
void exibirPreOrdem(Huffman *tree) // Exibi na Ordem da Arvore
{
	if(tree != NULL)
	{
		//if(tree->dir == NULL)
			printf("\nPos -> %d\t| Freq -> %d", tree->posTab, tree->freq);
		exibirPreOrdem(tree->esq);
		exibirPreOrdem(tree->dir);
	}
}

void peencherCodigoTabela(Huffman *tree, Tabela tab[], char cod[])
{
	if(tree != NULL)
	{
		if(tree->dir == NULL) // Aqui independe, pq se um for nulo é FOLHA
		{
			strcpy(tab[tree->posTab].codigo, cod);
			cod[strlen(cod)-1] = '\0';
		}
		else
		{
			peencherCodigoTabela(tree->esq, tab, strcat(cod, "0"));
			peencherCodigoTabela(tree->dir, tab, strcat(cod, "1"));
			cod[strlen(cod)-1] = '\0';
		}	
	}
}

int buscaPalavraTabela(Tabela tab[], char palavra[], int TL)
{
	int pos = 0;
	strcpy(tab[TL].palavra, palavra);
	while(strcmp(palavra, tab[pos].palavra) != 0)
		pos++;
	
	if(pos < TL)
		return pos;
	else
		return -1;		
}

void codificarFrase(Tabela tabela[], char cod[], char frase[], int TL)
{
	int i;
	char *palavra;
	strcpy(cod, "");
	
	palavra = strtok(frase," ");
	while(palavra != NULL)
	{
		i = buscaPalavraTabela(tabela, palavra, TL);
		strcat(cod, tabela[i].codigo);
		palavra=strtok(NULL," ");
	}
}

void geraArqTab(Tabela tab[], int TL)
{
	int i = 0;
	FILE *PtrArq = fopen("tabela.dat", "wb");
	
	while(i < TL)
		fwrite(&tab[i++], sizeof(Tabela), 1, PtrArq);
	
	fclose(PtrArq);
}

void gerarAquivoCodigo(char codigo[])
{
	FILE *PtrArq = fopen("fraseCodificada.txt", "w");
	fprintf(PtrArq, codigo);
	fclose(PtrArq);
}




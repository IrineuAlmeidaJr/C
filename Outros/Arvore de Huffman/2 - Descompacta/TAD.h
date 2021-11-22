// Tabela
struct tabela
{
	char palavra[PALAVRA];
	int frequencia;
	char codigo[25]; 
};
typedef struct tabela Tabela;

void mostrarTabela (Tabela tabela[], int TL)
{
	int i;
	printf("\n\nPos\tPalavra\t\tFreq\tCod\n");
	for(i = 0 ; i < TL; i++)
	{	
		printf("%d\t%s\t\t%d\t%s\n",i, tabela[i].palavra, tabela[i].frequencia, tabela[i].codigo);
	}
}

void montarTabela(Tabela tab[], int *TL)
{
	FILE *Ptr = fopen("tabela.dat", "rb");
	Tabela temp;
	
	if(Ptr != NULL)
	{
		fread(&temp, sizeof(Tabela), 1, Ptr);
		while(!feof(Ptr))
		{
			tab[(*TL)++] = temp;
			fread(&temp, sizeof(Tabela), 1, Ptr);
		}	
	}
	
	fclose(Ptr);
}

void lerCodigo(char *codigo[])
{
	FILE *Ptr = fopen("fraseCodificada.txt", "r");
	fgets(&*codigo, CODIGO, Ptr);
	fclose(Ptr);
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

Huffman *criaCaixaVazia()
{
	Huffman *nova = (Huffman*)malloc(sizeof(Huffman));
	nova->dir = nova->esq = nova->prox = NULL;
	nova->freq = nova->posTab = -1;
	
	return nova;
}

Huffman *criaCaixa(int frequencia, int posTab)
{
	Huffman *nova = (Huffman*)malloc(sizeof(Huffman));
	nova->dir = nova->esq = nova->prox = NULL;
	nova->freq = frequencia;
	nova->posTab = posTab;
	
	return nova;
}

void montarTree(Huffman **tree, Tabela tab[], int i)
{
	int j = 0;				                     
	Huffman *nova, *aux;                   									
	while(tab[i].codigo[j] !=  '\0')
	{
		if(j == 0) // Raiz 
		{
			if(tab[i].codigo[j+1] != '\0')
			{
				if(tab[i].codigo[j] == '1') // Se 1 = Verdadeiro -> direita
				{		
					if((*tree)->dir == NULL)	
					{
						nova = criaCaixaVazia();
						(*tree)->dir = nova;
						aux = (*tree)->dir;							
					}	
					else
					{
						aux = (*tree)->dir;	
					}						
				}
				else
				{
					if((*tree)->esq == NULL)
					{	
						nova = criaCaixaVazia();					
						(*tree)->esq = nova;
						aux = (*tree)->esq;
					}
					else
					{
						aux = (*tree)->esq;
					}
				}
			}	
			else // Cria Folha
			{			
				nova = criaCaixa(tab[i].frequencia, i);
				if(tab[i].codigo[j] == '1') // Se 1 = Verdadeiro -> direita
				{				
					(*tree)->dir = nova;
				}
				else
				{
					(*tree)->esq = nova;	
				}
			}						
		}
		else // Não é raiz
		{
			if(tab[i].codigo[j+1] != '\0')
			{
				if(tab[i].codigo[j] == '1') // Se 1 = Verdadeiro -> direita
				{	
					if(aux->dir == NULL)	
					{
						nova = criaCaixaVazia();
						aux->dir = nova;
						aux = aux->dir;							
					}	
					else
					{
						aux = aux->dir;	
					}		
				}
				else
				{
					if(aux->esq == NULL)
					{	
						nova = criaCaixaVazia();					
						aux->esq = nova;
						aux = aux->esq;	
					}
					else
					{
						aux = aux->esq;
					}	
				}
			}	
			else // Cria Folha
			{				
				nova = criaCaixa(tab[i].frequencia, i);
				if(tab[i].codigo[j] == '1') // Se 1 = Verdadeiro -> direita
				{					
					aux->dir = nova;
				}
				else
				{
					aux->esq = nova;	
				}
			}	
		}		
		j++;
	}
}

void montarArvore(Huffman **tree, Tabela tab[], int TL)
{
	int i, j;
	// 0 -> esquerda | 1 -> direita
	init(&*tree);
	*tree = criaCaixaVazia();
	for(i = 0; i < TL; i++)
	{
		montarTree(&*tree, tab, i);
	}
}

void decodificar(Huffman *tree, Tabela tab[], char codigo[], char frase[])
{
	int i = 0;
	char auxCod[50];
	Huffman *aux;
	strcpy(auxCod, "");
	strcpy(frase, "");
	
	aux = tree; //quando achar volta para raiz
	
	while(codigo[i] != '\0')
	{
		if(codigo[i] == '1')
		{
			if(aux->dir == NULL) // É Folha
			{
				printf("%s ", tab[aux->posTab].palavra);
				
				aux = tree;	
			}
			else
			{
				i++;
				aux = aux->dir;
			}
		}
		else
		{
			if(aux->esq == NULL)
			{
				printf("%s ",  tab[aux->posTab].palavra);
				
				aux = tree;	
			}
			else
			{
				i++;
				aux = aux->esq;
			}			
		}	
	}
	
	// Chamei de novo porque não pegava a ultima palavra
	if(codigo[i] == '1')
	{
		if(aux->dir == NULL) // É Folha
		{
			printf("%s ", tab[aux->posTab].palavra);
			
			aux = tree;	
		}
		else
		{
			i++;
			aux = aux->dir;
		}
	}
	else
	{
		if(aux->esq == NULL)
		{
			printf("%s ",  tab[aux->posTab].palavra);
			
			aux = tree;	
		}
		else
		{
			i++;
			aux = aux->esq;
		}			
	}
}

void exibirPreOrdem(Huffman *tree) // Exibi na Ordem da Arvore
{
	if(tree != NULL)
	{
		//if(tree->dir == NULL && tree->esq == NULL)
			printf("\nPos -> %d\t| Freq -> %d | ->esq %d | ->dir %d", tree->posTab, tree->freq, tree->esq, tree->dir);
		exibirPreOrdem(tree->esq);
		exibirPreOrdem(tree->dir);
	}
}















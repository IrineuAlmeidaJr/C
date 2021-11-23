#include <stdio.h>
#include <ctype.h>
#define TF 12
 
int main() {
 
    int cont = 0, l, c;
    float mat[TF][TF], soma = 0;
    char O;
    
    scanf("%c", &O);
    O = toupper(O);
    
    for(l = 0; l < TF; l++) {
        for(c = 0; c < TF; c++) {
            scanf("%f", &mat[l][c]);
        }
    }
    
    for (l = 1; l < TF; l++) {
        for (c = TF - 1; c >= TF - l; c--) {
            soma += mat[l][c];
            cont++;
        }
    }
    
    if ('S' == O) {
        printf("%.1f\n", soma);
    } else {
        printf("%.1f\n", soma / cont);
    }   
        
 
    return 0;
}

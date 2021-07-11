#include <stdio.h>

void execultar(){
    long int num;
    scanf("%li", &num);
    for(int i=0; i<num-1; i++)
        printf("Ho ");
    printf("Ho!\n");    
}

int main() {
    execultar();
    return 0;
}

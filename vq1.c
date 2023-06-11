/*1. Preencher um vetor com 10 números. Indique o maior número
ao varrer o vetor preenchido.
*/


#include <stdio.h>

int main()
{
    int maior = 0;
    
    int lista[10];
    
    for(int c = 0; c < 10; c++){
        printf("\nDigite o número da %i°  posição:  ", c+1);
        scanf("%i", &lista[c]);
    }
    
    for(int c = 0; c < 10; c++){
        if(lista[c] >= maior){
            maior = lista[c];
        }
    }
    
    printf("\nMaior = %i\n", maior);
}

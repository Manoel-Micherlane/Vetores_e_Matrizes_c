/* 1. Preencher uma matriz 3x3 e imprimir.
*/


#include <stdio.h>


int main()
{
    int mat[3][3];
    
    
    for(int c = 0; c < 3; c++){
        for(int i = 0; i < 3; i++){
            printf("Digite um valor para a posição %ix%i:  ", c+1, i+1);
            scanf("%i", &mat[c][i]);
        }
    }
    
    printf("\n");
    
    for(int c = 0; c < 3; c++){
        for(int i = 0; i < 3; i++){
            printf("%i ", mat[c][i]);
        }
        printf("\n");
    }
}

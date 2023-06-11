/* 4. Criar um algoritmo que leia os elementos de uma matriz inteira
de 4 x 4 e imprimir os elementos da diagonal principal.
*/


#include <stdio.h>


int main()
{
    int mat[4][4];
    
    for(int c = 0; c < 4; c++){
        for(int i = 0; i < 4; i++){
            printf("Digite um valor para a posição %ix%i:  ", c+1, i+1);
            scanf("%i", &mat[c][i]);
        }
    }
    
    printf("\n");
    
    
    for(int c = 0; c < 4; c++){
        for(int i = 0; i < 4; i++){
            
            if(c == i){
                printf("%i   ", mat[c][i]);
            }
        }
        printf("\n");
    }
}

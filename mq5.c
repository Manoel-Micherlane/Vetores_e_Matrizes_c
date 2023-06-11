/* 5. Criar um algoritmo que leia os elementos de uma matriz inteira
de 3 x 3 e imprimir todos os elementos, exceto os elementos da
diagonal principal.
*/



#include <stdio.h>


int main()
{
    int mat[3][3];
    int soma = 0;
    
    for(int c = 0; c < 3; c++){
        for(int i = 0; i < 3; i++){
            printf("Digite um valor para a posição %ix%i:  ", c+1, i+1);
            scanf("%i", &mat[c][i]);
        }
    }
    
    printf("\n");
    
    
    for(int c = 0; c < 3; c++){
        for(int i = 0; i < 3; i++){
            
            if(c != i){
                printf("%i   ", mat[c][i]);
            }
            else{
                printf(".  ");
            }
        }
        printf("\n");
    }
}


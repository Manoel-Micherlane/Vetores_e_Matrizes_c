/* 2. Criar um algoritmo que leia os elementos de uma matriz inteira
de 3x3 e imprimir outra matriz multiplicando cada elemento da
primeira matriz por 2.
*/


#include <stdio.h>


int main()
{
    int mat[3][3];
    int mat2[3][3];
    
    
    for(int c = 0; c < 3; c++){
        for(int i = 0; i < 3; i++){
            printf("Digite um valor para a posição %ix%i:  ", c+1, i+1);
            scanf("%i", &mat[c][i]);
        }
    }
    
    printf("\n");
    
    for(int c = 0; c < 3; c++){
        for(int i = 0; i < 3; i++){
            mat2[c][i] = mat[c][i] * 2;
        }
    }
    
    for(int c = 0; c < 3; c++){
        for(int i = 0; i < 3; i++){
            printf("%i   ", mat2[c][i]);
        }
        printf("\n");
    }
}

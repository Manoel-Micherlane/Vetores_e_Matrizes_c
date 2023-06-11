/* 3. Desenvolva um algoritmo que recebe 6 valores numéricos
inteiros numa matriz 2x3 e mostre a soma destes 6 números.
*/


#include <stdio.h>


int main()
{
    int mat[2][3];
    int soma = 0;
    
    for(int c = 0; c < 2; c++){
        for(int i = 0; i < 3; i++){
            printf("Digite um valor para a posição %ix%i:  ", c+1, i+1);
            scanf("%i", &mat[c][i]);
        }
    }
    
    printf("\n");
    
    for(int c = 0; c < 2; c++){
        for(int i = 0; i < 3; i++){
            soma += mat[c][i];
        }
    }
    
    for(int c = 0; c < 2; c++){
        for(int i = 0; i < 3; i++){
            printf("%i   ", mat[c][i]);
        }
        printf("\n");
    }
    
    printf("\nSoma: %i\n", soma);
}


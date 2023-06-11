/* 2. Preencher um vetor com 10 números. Indique o maior e o
menor número, e forneça a diferença entre eles.
*/


#include <stdio.h>

int main()
{
    int maior = 0;
    int menor;
    
    int lista[10];
    
    for(int c = 0; c < 10; c++){
        printf("\nDigite o número da %i°  posição:  ", c+1);
        scanf("%i", &lista[c]);
    }
    
    for(int c = 0; c < 10; c++){
        
        if(c == 0){
            menor = lista[c];
        }
        else if(lista[c] <= menor){
            menor = lista[c];
        }
        
        if(lista[c] >= maior){
            maior = lista[c];
        }
    }
    
    printf("\nMaior = %i\n", maior);
    printf("\nMenor = %i\n", menor);
}

/*
4. Preencher um vetor com 10 números. Retorne quais são os
números primos deste vetor.
*/


#include <stdio.h>


int main()
{
    int  lista[10];
    int cont;
    
    
    for(int c = 0; c < 10; c++){
        printf("\nDigite o número da %i°  posição:  ", c+1);
        scanf("%i", &lista[c]);
    }
    
    
    
    for(int i = 0; i < 10; i++){
        for(int c = 1; c <= lista[i]; c++)
        {
            if((lista[i] % c) == 0)
            {
                cont++;
            }
        }
        
        if(cont == 2){
            printf("\n%i É um número primo", lista[i]);
        }
        else{
            printf("\n%i Não é um número primo", lista[i]);
        }
    }
}


/* 3. Preencher um vetor com 10 números. Retorne quais são os
números ímpares deste vetor.
*/


#include <stdio.h>


int main()
{
    int  lista[10];
    
    for(int c = 0; c < 10; c++){
        printf("\nDigite o número da %i°  posição:  ", c+1);
        scanf("%i", &lista[c]);
    }
    
    for(int i = 0; i < 10; i++){
        if((lista[i] % 2) == 0){
            printf("%i é par\n", lista[i]);
        }
        else{
            printf("%i é ímpar\n", lista[i]);
        }
    }
}

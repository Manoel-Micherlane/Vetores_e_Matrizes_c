/*5. Preencher um vetor com números inteiros (8unidades); solicitar
um número do teclado. Pesquisar se esse número existe no
vetor. Se existir, imprimir em qual posição do vetor. Se não
existir, imprimir MSG que não existe.
*/


#include <stdio.h>


int main()
{
    int lista[8];
    int num;
    int cont = 8;
    
    
    for(int c = 0; c < 8; c++){
        printf("\nDigite o número da %i°  posição:  ", c+1);
        scanf("%i", &lista[c]);
    }
    
    printf("\nDigite um número:  ");
    scanf("%i", &num);
    
    for(int i = 0; i < 8; i++){
        if(lista[i] == num){
            cont = i;
        }
    }
    
    if(cont != 8){
        printf("\nO número %i está na %i° posição \n", num, cont+1);    
    }
    else{
        printf("\nO número %i não está na lista\n", num);
    }
}

/*19 - Faca um programa para verificar se um número inteiro lido é quadrado
perfeito. Para que um número seja quadrado perfeito a soma dos seus divisores deve
resultar num valor igual ao número.*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
   
    int num, aux;
    float val;
   
    printf("Digite um Numero Inteiro: ");
    scanf("%d",&num);
    val=sqrt(num);
    aux=val;
    if(val<=aux){
             printf("\nO Numero Digitado eh um Quadrado Perfeito");
    }
    else
        printf("\nO Numero Digitado nao eh um Quadrado Perfeito\n\n");
    system("pause");
    return 0;
}


//Breno B Martins :) 

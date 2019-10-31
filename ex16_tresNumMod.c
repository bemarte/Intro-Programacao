/* 16 - Elaborar um programa em C que peça ao usuário que digite 3 números
reais, e calcule o módulo destes números e devolva o maior valor em módulo e o
menor valor real, utilizando função. */


#include <stdio.h>
#include <conio.h>
#include <math.h>

void insiraVal(void);
int maiorMod(int*,int);
int menorVal(int*,int);

main(){
	
	insiraVal();
	return 0;
}

void insiraVal(void){
	int i, num[2];
	
	for(i=0;i<3;i++){
		printf("Digite numero: ");
		scanf("%d",&num[i]);
	}
	
	printf("\nMaior valor: %d\n",maiorMod(num,3));
	printf("Menor valor: %d",menorVal(num,3));
}

int maiorMod(int *num, int x){
	int i, maior=0;
	int numX;
	
	for(i=0;i<x;i++){
		numX = abs(num[i]);
		if(numX>maior){
			maior = numX;
		}
	}
	
	return maior;
}

int menorVal(int *num, int y){
	int i, menor=0;

	
	for(i=0;i<y;i++){

		if(num[i]<menor){
			menor = num[i];
		}
	}
	
	return menor;
}

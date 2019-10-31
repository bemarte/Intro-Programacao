/*
20 – Faça um programa que contenha um menu com 4 opções:
1 – calcular o fatorial de um número dado
2 – calcular a raiz quadrada de 3 números dados
3 – imprimir a tabuada completa de 1 a 10
4 – sair do programa
Cada um dos 3 itens acima deve ser elaborado em forma de função ou
procedimento.*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

void menu(void);
int fatNumb(int);
void raisq(void);
void tabuada(void);

main(){
	menu();
	return 0;
}

void menu(void){
	int i;
	int val=0;
	int val2[2];
	
	do{
		system("cls");
		printf("Menu\n");
		printf("1 - Calcular o fatorial de qualquer número.\n");
		printf("2 - Calcular a raiz quadrada de 3 números dados.\n");
		printf("3 - Imprimir a tabuada completa de 1 a 10.\n");
		printf("4 - sair do programa.\n");		
		scanf("%d",&i);
		
		switch(i){
			case 1:
				printf("Insira o valor para ser calculado seu fatorial: ");
				scanf("%d",&val);
				printf("Fatorial calculado: %d",fatNumb(val));
				printf("\n\n\n");
				break;
			case 2:
				raisq();
				break;
			case 3:
				tabuada();
			default:
				printf("Valor inválido");
		}
		
	}while(i!=4);
}

int fatNumb(int val){
	int fat;
	
	system("cls");
 
	for(fat = 1; val > 1; val = val - 1){
		fat = fat * val;
	}
		return fat;
}

void raisq(void){
	int val2[2];
	
	for(int j=0;j<3;j++){
		printf("Insira o valor para ser calculado a raiz: ");
		scanf("%d",&val2[j]);
		printf("Raiz quadrada é: %.2f\n",sqrt(val2[j]));
				
		}
	system("pause");
}

void tabuada(void){
	int i, j, num;
	
	for(i=1;i<=10;i++){
		printf("\nTabuada do %d \n",i);
			for(j=1;j<=10;j++){
				printf("%d x %d: %d \n",i,j,i*j);
			}
	}
	system("pause");
}








//Breno B MARTINS

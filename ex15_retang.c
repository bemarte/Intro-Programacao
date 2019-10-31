/*15 - Elaborar um programa que passa dois argumentos (base e altura)
para a função retang( ), cujo propósito é desenhar retângulos de vários
tamanhos na tela, correspondentes a cômodos de uma casa.*/

//atividade incpmpleta

#include <stdio.h>
void insRet(void);

main(){
	insRet();
	return 0;
}

void insRet(void){
	int i,j;
	int larg=0, col=0;
	
	printf("Insira a medida de largura: ");
	scanf("%d",&larg);
	printf("Insira a medida de coluna: ");
	scanf("%d",&col);
	
	printf("\n");

	for(i=0;i<larg;i++){
		for(j=0;j<col;j++){
			printf("*");
		}
		printf("\n");
	}
	
	printf("\n");
	printf("Retangulo %d x %d",larg,col);
}

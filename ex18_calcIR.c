/*18 - Faça um programa que calcule o imposto de renda de 10 contribuintes
considerando que o número de dependentes e renda mensal de cada contribuinte são
valores fornecidos pelo usuário. Para cada contribuinte será feito um desconto de 5%
de salário mínimo por dependente. Os valores da alíquota para cálculo do imposto
são:

Até 2 salários mínimos Isento
2..3 (inclusive) 5%
3..5 (inclusive) 10%
5..7 (inclusive) 15%
Acima de 7 20% */

#include <stdio.h>
#include <conio.h>
#include <math.h>

void insiraDados(void);

main(){
	insiraDados();
	return 0;
}

void insiraDados(){
	int i, depC[9];
	float rendMensal[9];
	float descontoPD;
	float salmin = 998; //sal minimo
	float IR = 0, rendaDesc=0;
	
	for(i=0;i<10;i++){
		printf("\nContribuinte de ID %d\nInsira Numero de Dependentes : ",i);
		scanf("%d",&depC[i]);
		printf("Contribuinte de ID %d\nInsira Renda Mensal : ",i);
		scanf("%f",&rendMensal[i]);
		
		
		//desconto por dependentes
		if(depC[i]>0){
		descontoPD = depC[i]*(salmin*0,05);
		}
		
		rendaDesc = rendMensal[i]-descontoPD;
		
		//calculo da alíquota
		//considerando sal min R$998,00
		if(rendaDesc<=(salmin*2)){
			printf("Contribuinte está isento!\n");
		}else if( (rendaDesc>(salmin*2)) && (rendaDesc<=(salmin*3)) ){
			
			IR = ((rendaDesc*5)/(100));
			printf("IR: %.2f \n",IR);
			
		}else if( (rendaDesc>(salmin*3)) && (rendaDesc<=(salmin*5)) ){
			
			IR = ((rendaDesc*10)/(100));
			printf("IR: %.2f \n",IR);
			
		}else if( (rendaDesc>(salmin*5)) && (rendaDesc<=(salmin*7)) ){
			
			IR = ((rendaDesc*15)/(100));
			printf("IR: %.2f \n",IR);
			
		}else if( (rendaDesc>(salmin*7))){
			
			IR = ((rendaDesc*20)/(100));
			printf("IR: %.2f \n",IR);
			
		}else{
			printf("Fora dos Parametros!");
		}
		
		
		//testes
		//printf("Desconto PD: %.2f",descontoPD); 
		//printf("Renda Mensal: %.2f",rendaDesc);
	}
}



//Breno B Martins

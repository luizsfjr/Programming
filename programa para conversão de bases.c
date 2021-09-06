// Programa de conversão de base decimal, binário, octal e hexadecimal
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
void DecimalBinario(int num){
	
	int i,quociente=0,numAuxiliar=num,tamanho=1;
	while(quociente!=1){
	quociente = numAuxiliar/2;
	numAuxiliar = quociente;
	tamanho++;
	}
	
	int resultado[tamanho]; // ********Declaração tardia!!!!!!!!********
	resultado[tamanho] = 1; // Sempre, em numeros binarios positivos, o primeiro dígito, é o número 1!
	for(i=0;i<tamanho;i++){
		resultado[i] = num%2;
		num = num/2;
		}
	
	for(i=1;i<=tamanho;i++){
		printf("%d",resultado[tamanho-i]);
	}
	
}


main(){
	int num, opcao=1;;
	 // Entrada de dados/numero	 
	 while(opcao=1){
	printf("Digite um numero em decimal: ");
	scanf("%d", &num);
	
	// exibição de resultados
	printf("resultado em binario = ");
	DecimalBinario(num);
	
	printf("\npressione 1 para realizar uma nova transformacao ou pressione qualquer outro numero para encerrar a sessao!\n");
	scanf("%d", &opcao);
	if(opcao!=1){
		break;
		}	
	}
	
	printf("***Fim do Programa***");
}

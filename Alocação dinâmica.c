#include<stdlib.h>
#include<stdio.h>
main(){
	int qtde, *numeros, i;
	printf("Quantidade \n");
	scanf("%d", &qtde);
	numeros = (int*)malloc(qtde*sizeof(int));
	printf("digite os numeros: \n");
	for(i=0;i<qtde;i++){
		scanf("%d", &numeros[i]);
	} 
	
	for(i=0;i<qtde;i++){
		printf(" %d \n", 2*numeros[i]);
	}
}

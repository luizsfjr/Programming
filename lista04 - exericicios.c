#include<stdio.h>
main(){
	int vetor[3],i,tam;
	tam = sizeof(vetor)/sizeof(int);
	for(i=0;i<tam;i++){
		printf("digite um valor: ");
		scanf("%d", &vetor[i]);
	}
	for(i=0;i<tam;i++){
			printf(" %d ", vetor[tam-(i+1)]);
			if(i==2){		
			printf("\n");
			}
	}
	
	
}

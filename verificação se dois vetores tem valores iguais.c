#include<stdio.h>
main(){
	int i,j; 
	float vetor1[2], vetor2[4];
	for(i=0;i<2;i++){
		printf("digite um valor para o vetor 1: ");
		scanf("%f", &vetor1[i]);
	}
	for(i=0;i<4;i++){
		printf("digite um valor para o vetor 2: ");
		scanf("%f", &vetor2[i]);
	}
	for(i=0;i<4;i++){
		for(j=0;j<2;j++){
			if(vetor1[j]==vetor2[i]){                                          
				printf(" %.2f ", vetor1[j]);
			}
		}
	}
	
}

// multiplicação de dois vetores de mesmo índice
#include<stdio.h>
// função multiplicação
void multi(int i, int tam, float v[], float j[]){
	float res[tam];
	for (i=0;i<tam;i++){
		res[i] = v[i]*j[i];
	}
		for(i=0;i<tam;i++){
			printf("vetor resultante do indice %d = %.2f\n", i+1, res[i]);
		}
}

//função principal
main(){
	int i,tam;
	float v[2],j[2];
	tam = sizeof(v)/sizeof(int);
	for(i=0;i<tam;i++){
		printf("digite o %d valor para o primeiro vetor: ", i+1);
		scanf("%f", &v[i]);
		printf("\n");
		printf("digite o %d valor para o segundo vetor: ", i+1);
		scanf("%f", &j[i]);
		printf("\n");
	}
	multi(i,tam,v,j);
	
}

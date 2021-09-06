// ler um número N e somar todos números de 1 até N
#include<stdio.h>
	float soma(){
		float n,s;
		printf("digite um valor qualquer : ");
		scanf("%f", &n);
		s = ((1+n)*n)/2;
		return s;
	}
//função principal
main(){
	printf("soma de todos os valores inteiros de 1 a n = %.2f", soma());
}
